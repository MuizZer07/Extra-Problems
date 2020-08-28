<?php

/*
*
* Contains important constants
*
*/


define('CREATE_USER_TABLE', "CREATE TABLE Users (
            id INT(6) UNSIGNED AUTO_INCREMENT PRIMARY KEY,
            password VARCHAR(200),
            email VARCHAR(50),
            reg_date TIMESTAMP DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP
            )");

define('CREATE_NEW_USER', "INSERT INTO `users` (`email`, `password`) VALUES (?, ?); ");
define('UPDATE_USER', "update users set email = ?, password = ? where id = ?");
define('DELETE_USER', "delete from users where id = ?");
define('GET_USER', "select * from users where id = ?");
define('GET_ALL_USER', "select * from users");
define('GET_USER_BY_EMAIL', "select id from users where email = ?");
