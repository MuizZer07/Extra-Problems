### Scheduling Test Project

##### Work procedures:
- Sample project extracted from the given source.
- Install & set up with specific requirements and database.
- Given functions are updated in the model.php file with functional code.
```php

/**
 * Get schedule for a student
 * @param int $student_id
 * @param string $start_date
 * @param string $end_date
 * @param int $tutor_id
 * @return array
 * @throws \Exception
 */
getStudentSchedule($start_date, $end_date, $student_id); 

/**
 * Get schedule for a tutor
 * @param string $start_date
 * @param string $end_date
 * @param int $tutor_id
 * @return Array
 * @throws \Exception
 */ 
getTutorSchedule($start_date, $end_date, $tutor_id); 

/**
 * Get if tutor is available or not
 * @param string $date
 * @param string $time
 * @param int $tutor_id
 * @return boolean
 * @throws \Exception
 */
isTutorAvailable($date, $time, $tutor_id); 

/**
 * Get day schedule for a tutor
 * @param string $date
 * @param int $tutor_id
 * @return array
 * @throws \Exception
 */
getTutorDaySchedule($date, $tutor_id); 
```

- A helper class is created for repeated operations
- Codes refactored and restructured with proper commenting (PHP doc).
- Full cycle manual testing done, unit tests are not written due to time constraints.
- Updated .sql file can be found in the directory: sql/scheduling_db.sql.
- All files along with the vendor folder are zipped.

_**- Thanks & Regards, Muiz Ahmed Khan. 30th June, 2020.**_