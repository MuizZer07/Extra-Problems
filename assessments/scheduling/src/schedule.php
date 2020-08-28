<?php
/**
 * Library which provide all kind of employee information and data
 *
 * @package Organogram
 * @author Sarwar Hossain <sarwar@instabd.com> 
 * @copyright   Instalogic
 * @link URL description
 * @version 1.0.0
 * 
 */
namespace Scheduling;


use Scheduling\Model;

/**
 * Schedule Class provides all employee data. 
 * Usages: 
 * ```
 * use \Scheduling\Schedule <br />
 * $emp = new Employee(); <br />
 * call of your desire method from view or anywhere. 
 * 
 */
 class Schedule
{

    function __construct(){

    }

    /**
     * Get the employee array 
     * @param type $id
     * @return type
     */
    function getStudents($id = Null){
        return Model::get()->getStudents($id);

    }
   
    /**
     * TODO: Given date range start date & end date and find out the schedule of that student. 
     *       Expected Output: Array with date index
     *       return $output = [
     *              [
     *                  2020-06-20 => [
     *                      '10:00AM', '02:00PM', '07:00PM'
     *                  ],
     *                  2020-06-21 => [
     *                      '05:00PM', '07:00PM'
     *                  ],
     *          ]
     *          
     * @param string $start_date
     * @param string $end_date
     * @param Integer $student_id
     * @param Integer $tutor_id
     * @return Array List of dates indexed with tuition time
     */
    public function getStudentSchedule($start_date, $end_date, $student_id, $tutor_id = null){
        return Model::get()->getStudentSchedule($student_id, $start_date, $end_date);
    }
        
    /**
     * TODO: Given date range and find out the schedule of a tutor for each date. 
     *       Expected Output: Array with date index
     *       return $output = [
     *              [
     *                  2020-06-20 => [
     *                      '10:00AM' => [ student_id = 5, is_reschedule = 0],
     *                      '05:00PM' => [ student_id = 6, is_reschedule = 0],
     *                      '07:00PM' => [ student_id = 1, is_reschedule = 0],
     *                  ],
     *                  2020-06-21 => [
     *                      '05:00PM' => [ student_id = 7, is_reschedule = 0],
     *                      '06:00AM' => [ student_id = 1, is_reschedule = 1],
     *                  ],
     *          ]
     * @param string $start_date
     * @param string $end_date
     * @param int $tutor_id
     * @return Array Date indexed Array 
     */
    public function getTutorSchedule($start_date, $end_date, $tutor_id){
        return Model::get()->getTutorSchedule($start_date, $end_date, $tutor_id);
    }
    
    //       Consider the Re-Scheule table as well. 
    /**
     * TODO: Given a date and time to find out if Tutor is available or not on that given date and time
     *        Expected Output: TRUE / FALSE
     * 
     * @param string $date
     * @param string $time
     * @param Integer $tutor_id
     * @return bool
     */
    public function isTutorAvailable($date, $time, $tutor_id){
        return Model::get()->isTutorAvailable($date, $time, $tutor_id);
    }
    
    
    
    /**
     *  TODO: This method will prepare an array of a day, the array key will keep the time on each hour and value will be the true or false
     *        true mean that time tutor available or not
     *        Expected Output: 
     *          $schedule = [
     *              '06:00AM' =>  [
     *                          'available' => true,
     *                          'student' => []
     *              ],
     *              '07:00AM' =>  [
     *                          'available' => true,
     *                          'student' => []
     *              ],
     *              '08:00AM' =>  [
     *                          'available' => true,
     *                          'student' => []
     *              ],
     *              '09:00AM' =>  [
     *                          'available' => true,
     *                          'student' => []
     *              ],
     *              '10:00AM' =>  [
     *                          'available' => false,
     *                          'student' => [
     *                                  'id' => 5,
     *                                  'name' => 'Adam H Khan',
     *                                  'email' => 'adam@gmail.com'
     *                                  'start_date' => '2020-05-01'                                          
     *                                  'type' => 1
     *                          ],
     *              ],
     *              '11:00AM' =>  [
     *                          'available' => true,
     *                          'student' => []
     *              ],
     *      -------------------------continue 1 hour gap---------------
     *              '05:00PM' =>  [
     *                          'available' => false,
     *                          'student' => [
     *                                  'id' => 9,
     *                                  'name' => 'Adam H Khan',
     *                                  'email' => 'adam@gmail.com'
     *                                  'start_date' => '2020-05-01'                                          
     *                                  'type' => 1
     *                          ],
     *              ],
     *              '06:00PM' =>  [
     *                          'available' => true,
     *                          'student' => []
     *              ],
     *              '07:00PM' =>  [
     *                          'available' => false,
     *                          'student' => [
     *                                  'id' => 9,
     *                                  'name' => 'Adam H Khan',
     *                                  'email' => 'adam@gmail.com'
     *                                  'start_date' => '2020-05-01'                                          
     *                                  'type' => 1
     *                          ],
     *              ],
     * -------------------------continue 1 hour gap---------------
     *              '10:00PM' =>  [
     *                          'available' => true,
     *                          'student' => []
     *              ],
    *          ]
     * 
     * @param string $date
     * @param int $tutor_id
     * @return Array List of time 

     */
    public function getTutorDaySchedule($date, $tutor_id){
        return Model::get()->getTutorDaySchedule($date, $tutor_id);
    }
}