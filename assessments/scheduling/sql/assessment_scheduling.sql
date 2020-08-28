-- phpMyAdmin SQL Dump
-- version 4.6.6deb5
-- https://www.phpmyadmin.net/
--
-- Host: localhost:3306
-- Generation Time: Jun 24, 2020 at 11:42 AM
-- Server version: 5.7.30-0ubuntu0.18.04.1
-- PHP Version: 7.2.24-0ubuntu0.18.04.6

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `assessment_scheduling`
--

-- --------------------------------------------------------

--
-- Table structure for table `re_schedule`
--

CREATE TABLE `re_schedule` (
  `id` int(11) NOT NULL,
  `tutor_id` int(11) NOT NULL,
  `student_id` int(11) NOT NULL,
  `old_date` date NOT NULL,
  `old_time` varchar(10) NOT NULL,
  `new_date` date NOT NULL,
  `new_time` varchar(10) NOT NULL,
  `created` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- --------------------------------------------------------

--
-- Table structure for table `schedule`
--

CREATE TABLE `schedule` (
  `id` int(11) NOT NULL,
  `tutor_id` int(11) NOT NULL,
  `student_id` int(11) NOT NULL,
  `day` enum('SUN','MON','TUE','WED','THU','FRI','SAT') NOT NULL,
  `time` time NOT NULL,
  `duration` int(11) NOT NULL DEFAULT '1'
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `schedule`
--

INSERT INTO `schedule` (`id`, `tutor_id`, `student_id`, `day`, `time`, `duration`) VALUES
(1, 1, 1, 'SUN', '14:45:00', 1),
(2, 1, 1, 'TUE', '14:45:00', 1),
(3, 1, 1, 'THU', '14:45:00', 1),
(4, 1, 2, 'TUE', '17:00:00', 2),
(5, 1, 2, 'WED', '15:00:00', 2);

-- --------------------------------------------------------

--
-- Table structure for table `students`
--

CREATE TABLE `students` (
  `id` int(11) NOT NULL,
  `name` varchar(250) NOT NULL,
  `email` varchar(250) DEFAULT NULL,
  `created` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `students`
--

INSERT INTO `students` (`id`, `name`, `email`, `created`) VALUES
(1, 'Ira Membrit', 'ira@gaakb.com', '2020-06-22 20:10:27'),
(2, 'Brock Lee', 'lee@gaakb.com', '2020-06-22 20:10:27'),
(3, 'Sal Monella', 'paasan@gaakb.com', '2020-06-22 20:10:27'),
(4, 'Sue Vaneer', 'asde@gaakb.com', '2020-06-22 20:10:27'),
(5, 'Cory Ander', 'ckr@gaakb.com', '2020-06-22 20:10:27'),
(6, 'Robin Banks', 'robn@gaakb.com', '2020-06-22 20:10:27'),
(7, 'Wilma Mumduya', 'wila@gaakb.com', '2020-06-22 20:10:27'),
(8, 'Saul T. Balls', 'alun@gaakb.com', '2020-06-22 20:10:27'),
(9, 'Peter Pants', 'pan@gaakb.com', '2020-06-22 20:10:27');

-- --------------------------------------------------------

--
-- Table structure for table `tutors`
--

CREATE TABLE `tutors` (
  `id` int(11) NOT NULL,
  `name` varchar(250) NOT NULL,
  `email` varchar(250) DEFAULT NULL,
  `created` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `tutors`
--

INSERT INTO `tutors` (`id`, `name`, `email`, `created`) VALUES
(1, 'Ali Metz', 'al@gabs.com', '2020-06-22 20:04:57'),
(2, 'Metz Kamnla', 'aasl@gabs.com', '2020-06-22 20:06:33'),
(3, 'Turd Ferguson', 'zeral@gabs.com', '2020-06-22 20:06:33'),
(4, 'Petey Cruiser', 'zeral@gabs.com', '2020-06-22 20:06:33'),
(5, 'Paul Molive', 'al@gabs.com', '2020-06-22 20:07:35'),
(6, 'Rick O\'Shea', 'al@gabs.com', '2020-06-22 20:07:35'),
(7, 'Sariya Shacklefordz', 'al@gabs.com', '2020-06-22 20:07:35'),
(8, 'Pete Sariya', 'al@gabs.com', '2020-06-22 20:07:35'),
(9, 'Shacklefordz', 'al@gabs.com', '2020-06-22 20:07:35');

-- --------------------------------------------------------

--
-- Table structure for table `tutor_student`
--

CREATE TABLE `tutor_student` (
  `id` int(11) NOT NULL,
  `tutor_id` int(11) NOT NULL,
  `student_id` int(11) NOT NULL,
  `status` tinyint(4) NOT NULL,
  `type` tinyint(4) NOT NULL DEFAULT '1',
  `start_date` date NOT NULL,
  `end_date` date DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `tutor_student`
--

INSERT INTO `tutor_student` (`id`, `tutor_id`, `student_id`, `status`, `type`, `start_date`, `end_date`) VALUES
(1, 1, 1, 1, 1, '2020-06-23', NULL),
(2, 1, 2, 1, 2, '2020-06-01', '2020-08-06');

--
-- Indexes for dumped tables
--

--
-- Indexes for table `re_schedule`
--
ALTER TABLE `re_schedule`
  ADD PRIMARY KEY (`id`);

--
-- Indexes for table `schedule`
--
ALTER TABLE `schedule`
  ADD PRIMARY KEY (`id`);

--
-- Indexes for table `students`
--
ALTER TABLE `students`
  ADD PRIMARY KEY (`id`);

--
-- Indexes for table `tutors`
--
ALTER TABLE `tutors`
  ADD PRIMARY KEY (`id`);

--
-- Indexes for table `tutor_student`
--
ALTER TABLE `tutor_student`
  ADD PRIMARY KEY (`id`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `re_schedule`
--
ALTER TABLE `re_schedule`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT;
--
-- AUTO_INCREMENT for table `schedule`
--
ALTER TABLE `schedule`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=6;
--
-- AUTO_INCREMENT for table `students`
--
ALTER TABLE `students`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=10;
--
-- AUTO_INCREMENT for table `tutors`
--
ALTER TABLE `tutors`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=10;
--
-- AUTO_INCREMENT for table `tutor_student`
--
ALTER TABLE `tutor_student`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=3;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
