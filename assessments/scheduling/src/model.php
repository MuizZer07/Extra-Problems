<?php
/**
 * Model - All kind of database query and fetching result.  
 *
 *
 * PHP version 7.2
 *
 *
 * @package    Scheduling
 * @author     Sarwar Hossain <sarwar@instabd.com>
 * @copyright  2020 Intalogic Bangaldesh
 * @version    1.0.1
 */
namespace Scheduling;

// Include the configration file
include_once 'config.php';


/**
 * Model Class Statically use to all over the system.
 * Usage: \Model::get()->
 * 
 */
class Model{

    /**
     * @var helper Object
     */
    private $_helper;

    /**
     * @var MySQLi Object  
     */
    private $_dbcon;

    /**
     * Constructor 
     */
    public function __construct(){        
        $this->_dbcon = new \MySQLi(env('DB_HOST', 'localhost'), env('DB_USER', 'dbuser'), env('DB_PASSWORD', 'password'), env('DB_NAME', 'dbname'));
        if ($this->_dbcon->connect_error) {
            die("Connection failed: " . $this->_dbcon->connect_error);
        }
        $this->_helper = new Helper();
    }

    /**
     * Destructor
     */
    public function __destruct()
    {
        $this->_dbcon->close();
    }

    /**
     * Static method get the Model Object 
     * @return \Organogram\Model
     */
    public static function get() {
        return new Model();
    }

    /**
     * Query : Execute the base query 
     * @param String $sql
     * @return mixed 
     */
    private function query($sql){
        return $this->_dbcon->query($sql);
    }
    
    /**
     * fetch : get the first result 
     * @param mixed $result
     * @return Array
     */
    private function fetch($result){
        $data = $result->fetch_assoc();
        $result->free_result();
        return $data;
    }
    /**
     * fetchAll : get the full result of query
     * @param mixed $result
     * @return Array
     */
    private function fetchAll($result){        
        $data = $result->fetch_all(MYSQLI_ASSOC);
        $result->free_result();
        return $data; 
    }
    
    /**
     * Get the List of tutor 
     * @param int $id  Optional
     * @return Array
     */
    public function getTutor($id = null){       
        $where = $id == null ? "" : " WHERE id='{$id}'";        
        $sql = "SELECT * FROM tutors {$where}";
        $result = $this->query($sql);
        return $id ? $this->fetch($result) : $this->fetchAll($result);        
    }
    
    /**
     * Get the list of students 
     * @param int $id Optional
     * @return Array
     */
    public function getStudents($id = null){       
        $where = $id == null ? "" : " WHERE id='{$id}'";        
        $sql = "SELECT * FROM students {$where}";
        $result = $this->query($sql);
        return $id ? $this->fetch($result) : $this->fetchAll($result);        
    }
    
    
    /**
     * Get the list of students by tutor 
     * @param int $tutor_id
     * @return Array
     */
    public function getStudnetsByTutor($tutor_id){
        $sql = "SELECT * FROM students s LEFT JOIN tutor_student ts ON ts.student_id = s.id WHERE ts.tutor_id='{$tutor_id}'";
        $result = $this->query($sql);
        return $this->fetchAll($result);
    }
    
    
    /**
     * Get tutors by students 
     * @param int $student_id
     * @return Array
     */
    public function getTutorsByStudent($student_id){
        $sql = "SELECT * FROM tutors t LEFT JOIN tutor_student ts ON ts.tutor = t.id WHERE ts.student_id={$student_id}";
        $result = $this->query($sql);
        return $this->fetchAll($result);
    }


    /**
     * Get schedule for a student
     * @param int $student_id
     * @param string $start_date
     * @param string $end_date
     * @param int $tutor_id
     * @return array
     * @throws \Exception
     */
    public function getStudentSchedule($student_id, $start_date, $end_date){
        $result_array = $this->getResultsForTutorStudentTable("student_id", $student_id, $start_date, $end_date);  // get results from tutor_student and schedule table
        $period = $this->_helper->getDateIntervalPeriod($start_date, $end_date);  // get interval period between two dates
        $output = array();

        foreach ($period as $dt) {  // iter through interval dates
            $day = $this->_helper->getDayFromDate($dt);  // get day from date
            $date = $this->_helper->getDateStringFromDate($dt);  // get date as string
            $schedule = array();
            $all_schedule = array();

            foreach($result_array as $scheduled){  // iter through results
                if($this->_helper->dayComparison($day, $scheduled['day'])){  // compare two days e.g. sunday == monday?
                    $time = $this->_helper->getDateTimeFormat($scheduled['time']);  // get DateTime object
                    $time = $this->_helper->getTimeMinute($time);  // get time string e.g 6.20 AM

                    if($date >= $scheduled['start_date'] && $scheduled['student_id'] == $student_id){  // check if the given date is a greater date than start date
                        array_push($all_schedule, $time);
                    }
                }
            }

            if(sizeof($all_schedule) > 0){  // check if there is any objects in the array
                $schedule[$date] = $all_schedule;
                array_push($output, $schedule);
            }
        }

        return json_encode($output, JSON_PRETTY_PRINT);  // returning prettified json array
    }


    /**
     * Get schedule for a tutor
     * @param string $start_date
     * @param string $end_date
     * @param int $tutor_id
     * @return Array
     * @throws \Exception
     */
    public function getTutorSchedule($start_date, $end_date, $tutor_id){
        $result_array = $this->getResultsForTutorStudentTable("tutor_id", $tutor_id, $start_date, $end_date);  // get results from tutor_student and schedule table
        $period = $this->_helper->getDateIntervalPeriod($start_date, $end_date);  // get interval period between two dates
        $output = array();
        $rescheduled_dates = array();

        foreach ($period as $dt) {  // iter through interval dates
            $day = $this->_helper->getDayFromDate($dt);  // get day from date
            $date = $this->_helper->getDateStringFromDate($dt);  // get date as string
            $schedule = array();
            $all_schedule = array();

            foreach($result_array as $scheduled){
                if($this->_helper->dayComparison($day, $scheduled['day'])){  // compare two days e.g. sunday == monday?
                    $schedule_info = array();
                    $schedule_details = array();

                    $rescheduled = $this->isRescheduled($tutor_id, $scheduled['student_id'], $date, $scheduled['time']);  // check if current time is rescheduled for the tutor and student

                    $schedule_details['student_id'] = $scheduled['student_id'];
                    $schedule_details['is_rescheduled'] = $rescheduled["isRescheduled"];  // is_rescheduled = true/false

                    array_push($schedule_info, $schedule_details);

                    if(!$rescheduled["isRescheduled"]){  // if not rescheduled then scheduled time & date are same
                        $time = $this->_helper->getDateTimeFormat($scheduled['time']);
                        $time = $this->_helper->getTimeMinute($time);
                        $all_schedule[$time] = $schedule_info;
                    }else{  // if rescheduled then update with new time & date from reschedule table
                        $new_array = array();
                        $new_time = $this->_helper->getTimeMinute($this->_helper->getDateTimeFormat($rescheduled["new_time"]));
                        $new_array[$new_time] = $schedule_info;  // rescheduled time
                        $rescheduled_dates[$rescheduled["new_date"]] = $new_array;  // rescheduled date
                    }
                }
            }

            if(sizeof($all_schedule) > 0){  // check if there is any objects in the array
                $schedule[$date] = $all_schedule;
                array_push($output, $schedule);
            }
        }

        $output = $this->rescheduledSchedule($output, $rescheduled_dates);  // rearrange and adjust the array with rescheduled dates and times
        return json_encode($output, JSON_PRETTY_PRINT);  // returning prettified json array
    }


    /**
     * Get if tutor is available or not
     * @param string $date
     * @param string $time
     * @param int $tutor_id
     * @return boolean
     * @throws \Exception
     */
    public function isTutorAvailable($date, $time, $tutor_id){
        $available = true;
        $all_day_schedule = json_decode($this->getTutorSchedule($date, $date, $tutor_id));  // getting schedules for the tutor for given date, also returns with rescheduled information
        $all_day_schedule_obj = (array) array_pop($all_day_schedule);  // getting schedule array

        if($all_day_schedule > 0){  // if there is any schedule for the given date
            if(array_key_exists($date, $all_day_schedule_obj)){
                $day_schedule =(array) $all_day_schedule_obj[$date];  // object to array conversion

                foreach (array_keys($day_schedule) as $schedule){  // iter through each schedules
                    $schedule_detail =(array) $day_schedule[$schedule][0];
                    $student_id = $schedule_detail["student_id"];
                    $schedule_time = $this->_helper->getDateTimeFormat($schedule);
                    $schedule_time_str = $this->_helper->get24HourTime($schedule_time);
                    $full_schedule = $this->getSchedule($student_id, $tutor_id, $schedule_time_str);  // getting full schedule information

                    if($full_schedule) {  // if full schedule information is available
                        $duration = $full_schedule['duration'];
                        $tutor_available = $this->_helper->checkIfWithinSchedule($schedule_time, $duration, $time);  // check if given time is within the scheduled time, if not tutor is available

                        if(!$tutor_available){  // if tutor is not available
                            return false;
                        }
                    }
                }
            }
        }

        return $available;  // returning boolean value
    }

    /**
     * Get day schedule for a tutor
     * @param string $date
     * @param int $tutor_id
     * @return array
     * @throws \Exception
     */
    public function getTutorDaySchedule($date, $tutor_id){
        $result_array = $this->getResultsForTutorStudentTable("tutor_id", $tutor_id, $date, $date);  // get results from tutor_student and schedule table
        $date_format = $this->_helper->getDateTimeFormat($date);
        $day = $this->_helper->getDayFromDate($date_format);

        $starting_time = '6:00AM';  // for start iterating from 6.00 AM
        $time_hour = $this->_helper->getDateTimeFormat($starting_time);
        $new_time_hour = $this->_helper->getTimeMinute($time_hour);
        $output = array();

        for($i=0; $i<=16; $i++){  // iterating from 6.00 AM to 10.00 PM with 1 hour interval
            $availability = array();
            $student = array();

            $availability['available'] = true;
            foreach($result_array as $scheduled){
                if($this->_helper->dayComparison($day, $scheduled['day'])){  // compare two days e.g. sunday == monday?
                    $start_time = $this->_helper->getDateTimeFormat($scheduled['time']);
                    $available = $this->_helper->checkIfWithinSchedule($start_time,  $scheduled['duration'], $new_time_hour);  // check if given time is within the scheduled time, if not tutor is available

                    if(!$available){  // if tutor is not available then get student information and add to the array
                        $student_id = $scheduled['student_id'];
                        $student_info = $this->getStudents($student_id);

                        $student['id'] = $student_id;
                        $student['name'] = $student_info['name'];
                        $student['email'] = $student_info['email'];
                        $student['start_date'] = $scheduled['start_date'];
                        $student['type'] = $scheduled['type'];
                        $availability['available'] = false;
                    }

                    $availability['student'] = $student;
                }
            }
            $output[$new_time_hour] = $availability;

            $time_hour = $this->_helper->modifyDateByHour($time_hour);  // increase the hour by 1
            $new_time_hour =  $this->_helper->getTimeMinute($time_hour);
        }

        return json_encode($output, JSON_PRETTY_PRINT);  // returning prettified json array
    }

    /**
     * Get day schedule details information
     * @param int $student_id
     * @param int $tutor_id
     * @param string $time
     * @return Array
     */
    private function getSchedule($student_id, $tutor_id, $time){
        $sql = "SELECT * FROM schedule WHERE student_id = '{$student_id}' AND tutor_id = '{$tutor_id}' AND time = '{$time}'";

        $result = $this->query($sql);
        return $this->fetch($result);
    }


    /**
     * Get rearranged and sorted array with rescheduled information
     * @param Array $schedules
     * @param Array $rescheduled_dates
     * @return Array
     */
    private function rescheduledSchedule($schedules, $rescheduled_dates){
        $new_schedule = array();
        $dates = array();

        for($i=0; $i<sizeof($schedules); $i++){  // iter through schedules
            array_push($new_schedule, $schedules[$i]);  // push one by one schedule to new array
            $keys = array_keys($schedules[$i]);  // get date from the schedule
            $key = array_pop($keys);   // get date from the date array
            $dates = array_keys($rescheduled_dates);  // get dates from rescheduled array

            foreach ($dates as $date){
                if($key == $date){  // if rescheduled date already exists in the scheduled array, then add new rescheduled time to existing date index
                    $new_keys = array_keys($rescheduled_dates[$key]);
                    $new_key = array_pop($new_keys);
                    $new_schedule[$i][$key][$new_key] = $rescheduled_dates[$key][$new_key];
                    array_pop($rescheduled_dates);
                }
            }
        }

        if($dates){
            foreach ($dates as $date){  // iter dates if any date is not added to the new array yet, they don't already exist in the array, creating new date index
                $new_schedule[$i++][$date] = $rescheduled_dates[$date];
            }
        }

        return $new_schedule;  // returning newly arranged and sorted array with rescheduled information
    }


    /**
     * Get rescheduled information if a schedule is rescheduled
     * @param int $tutor_id
     * @param int $student_id Optional
     * @param string $date Optional
     * @param string $time Optional
     * @return Array
     */
    private function isRescheduled($tutor_id, $student_id=null, $date=null, $time=null){
        $output = array();
        $output["isRescheduled"] = false;
        $output["new_date"] = "";
        $output["new_time"] = "";

        $where = "tutor_id = '{$tutor_id}'";

        if($student_id){
            $where .= "AND student_id = '{$student_id}'";
        }

        if($date){
            $where .= "AND old_date = '{$date}'";
        }

        if($time){
            $where .= "AND old_time = '{$time}'";
        }

        $sql = "SELECT * FROM re_schedule WHERE {$where}";

        $result = $this->query($sql);
        $result_array = $this->fetchAll($result);

        if(sizeof($result_array) > 0){  // if there is any rescheduled information, then adding new time and date after rescheduling
            $output["isRescheduled"] = true;
            $output["new_date"] = $result_array[0]["new_date"];
            $output["new_time"] = $result_array[0]["new_time"];
        }

        return $output;
    }


    /**
     * Get results from tutor_student table, generic function
     * @param string $who (tutor or student)
     * @param int $id (tutor_id or student_id)
     * @param string $start_date
     * @param string $end_date
     * @return Array
     */
    private function getResultsForTutorStudentTable($who, $id, $start_date, $end_date){
        $join_on = "ts.student_id = s.student_id AND s.tutor_id = ts.tutor_id";
        $where = "ts.{$who}='{$id}' AND ts.start_date <= '{$start_date}' AND (ISNULL(ts.end_date) OR ts.end_date >='{$end_date}')";
        $sql = "SELECT * FROM tutor_student ts JOIN schedule s ON {$join_on} WHERE {$where}";

        $result = $this->query($sql);
        return $this->fetchAll($result);
    }
}


