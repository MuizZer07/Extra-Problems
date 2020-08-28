<?php
/**
 * Helper - helper class with helper functions
 * to deal with string manipulations,
 * date & time conversion etc.
 *
 * PHP version 7.2
 *
 *
 * @package    Scheduling
 * @author     Muiz Ahmed Khan <muizxzer07@gmail.com>
 * @copyright  2020 Intalogic Bangaldesh
 * @version    1.0.1
 */

namespace Scheduling;

use DateInterval;
use DatePeriod;
use DateTime;

class Helper
{

    /**
     * Constructor
     */
    public function __construct(){

    }

    /**
     * Checks if a given time is within a schedule
     * @param String $start_time
     * @param String $duration
     * @param String $time_hour
     * @return boolean
     */
    public function checkIfWithinSchedule($start_time, $duration, $time_hour){
        $available = true;
        $start_hour = $this->get24HourTime($start_time);

        $end_time = $start_time;
        $end_time = $this->modifyDateByHour($end_time, $duration);
        $end_hour = $this->get24HourTime($end_time);

        $time_hour = $this->getDateTimeFormat($time_hour);
        $time_hour = $this->get24HourTime($time_hour);

        if($time_hour >= $start_hour && $time_hour <= $end_hour){  // check if the time is within the start hour and end hour, if so the given time is not free
            $available = false;
        }

        return $available;
    }

    /**
     * Returns Date Interval with 1 day Period between two dates
     * @param String $start_date
     * @param String $end_date
     * @return DatePeriod
     */
    public function getDateIntervalPeriod($start_date, $end_date){
        $start_date_format =  $this->getDateTimeFormat($start_date);
        $end_date_format = $this->getDateTimeFormat($end_date);
        $end_date_format = $this->modifyDateByHour($end_date_format);
        $interval = DateInterval::createFromDateString('1 day');  // get interval by 1 day
        return new DatePeriod($start_date_format, $interval, $end_date_format);
    }


    /**
     * Creates & Returns a DateTime Object
     * @param String $date
     * @return DateTime
     */
    public function getDateTimeFormat($date){
        try {
            return new DateTime($date);
        } catch (\Exception $e) {

        }
    }


    /**
     * Increment a datetime object by hour, default 1 hour
     * @param DateTime $date
     * @param int $hour default = 1 hour
     * @return DateTime
     */
    public function modifyDateByHour($date, $hour=1){
        return $date->modify('+ '.$hour.' hour');
    }


    /**
     * Checks if two days are same or not e.g sunday ==  monday??
     * @param String $day1
     * @param String $day2
     * @return boolean
     */
    public function dayComparison($day1, $day2){
        return strpos(strtolower($day1), strtolower($day2)) !== false;
    }


    /**
     * Returns name of the day from DateTime object
     * @param DateTime $date
     * @return string
     */
    public function getDayFromDate($date){
        return $date->format("l");
    }


    /**
     * Returns string from a DateTime object
     * @param DateTime $date
     * @return string
     */
    public function getDateStringFromDate($date){
        return $date->format("Y-m-d");
    }


    /**
     * Returns time in 12 hour clock from DateTime object e.g. 3.10 PM
     * @param DateTime $date
     * @return string
     */
    public function getTimeMinute($date){
        return $date->format("g:i A");
    }


    /**
     * CReturns time in 24 hour clock from DateTime object e.g. 14:45:00
     * @param DateTime $date
     * @return string
     */
    public function get24HourTime($date){
        return $date->format("H:i:s");
    }
}