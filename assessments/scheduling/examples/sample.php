<?php
//Loading Autoload file 
require '../vendor/autoload.php'; 

// Example to show some employee
$schedule = new \Scheduling\Schedule();

//$data = $schedule->getStudents();
//echo "<pre>";
//print_r($data);
//echo "</pre>";

// Assessment 1
$data = $schedule->getStudentSchedule("2020-06-05", "2020-06-30", 2);
echo "<pre>";
print_r($data);
echo "</pre>";


// Assessment 2
//$data = $schedule->getTutorSchedule("2020-06-23", "2020-06-30", 1);
//echo "<pre>";
//print_r($data);
//echo "</pre>";


// Assessment 3
//$data = $schedule->isTutorAvailable("2021-08-05", "11:00 AM", 1);
//echo "<pre>";
//var_export($data);
//echo "</pre>";

// Assessment 4
//$data = $schedule->getTutorDaySchedule("2020-06-10", 1);
//echo "<pre>";
//print_r($data);
//echo "</pre>";


