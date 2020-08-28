<?php

/*
*
* Handles a GET Request
* returns a response 
* 
*/

require_once '..\..\db\DBoperations.php';
$response = array();

if($_SERVER['REQUEST_METHOD'] == 'POST'){
    if(isset($_POST['email']) and isset($_POST['password'])){
        $db = new DBoperations();
        $result = $db->createUser($_POST['password'],$_POST['email']);

        if($result == 1){
            $response['success'] = true;
            $response['message'] = "User Created successfully!";
        }else if($result == 2){
            $response['success'] = false;
            $response['message'] = "User not created";
        }else if($result == 0){
            $response['success'] = false;
            $response['message'] = "Username or Email is already registered!";
        }
    }else{
        $response['success'] = false;
        $response['message'] = "Required fields are missing";
    }
}else{
    $response['success'] = false;
    $response['message'] = $_SERVER['REQUEST_METHOD'];
}

echo json_encode($response);