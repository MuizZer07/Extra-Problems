<?php

/*
*
* Middleware Class to communicate with our database
* Requires DBconnect class 
* Implements CRUD Database Opetations
* 
*/

class DBoperations{

    private $con;

    function __construct(){
        require_once dirname(__FILE__) . '/DBconnect.php';
        require_once dirname(__FILE__) . '/Queries.php';

        $db = new DBconnect();

        $this->con = $db->connect();
    }

    # creates a user table
    public function createUserTable(){
        if ($this->con->query(CREATE_USER_TABLE) === TRUE) {
            return true;
        } else {
            return false;
        }
    }

    # creates a new User
    public function createUser($password, $email){
        if($this->isUserExist($email)){
                return 0;
        }else{
            $pass = password_hash($password, PASSWORD_DEFAULT);
            $stmt = $this->con->prepare(CREATE_NEW_USER);
    
            $stmt->bind_param("ss", $email, $pass);
    
            if($stmt->execute()){
                return true;
            }
            else{
                return false;
            }
        }
        
    }

    # update a user
    public function editUser($user_id, $email, $password){
        $stmt = $this->con->prepare(UPDATE_USER);
        $stmt->bind_param("sss", $email, $password, $user_id);
        return $stmt->execute();
    }

    # deletes a user
    public function deleteUser($user_id){
        $stmt = $this->con->prepare(DELETE_USER);
        $stmt->bind_param("s", $user_id);
        return $stmt->execute();
    }

    # gets all users
    public function getAllUsers(){
        $stmt = $this->con->prepare(GET_ALL_USER);
        $stmt->execute();
        return $stmt->get_result()->fetch_all();
    }

    # get user
    public function getUser($user_id){
        $stmt = $this->con->prepare(GET_USER);
        $stmt->bind_param("s", $user_id);
        $stmt->execute();
        return $stmt->get_result()->fetch_all();
    }

    # checks whether the given username and password exists or not
    private function isUserExist($email){
        $stmt = $this->con->prepare(GET_USER_BY_EMAIL);

        $stmt->bind_param("s", $email);
        $stmt->execute();
        $stmt->store_result();
        return $stmt->num_rows > 0;
    }
}