<?php

/*
*
* Handles a GET Request
* returns a response 
* 
*/

require_once '..\..\db\DBoperations.php';
$response = array();
$response_collection = array();

if($_SERVER['REQUEST_METHOD'] == 'DELETE'){
    $db = new DBoperations();

    $response['Success'] = $db->deleteUser($_POST['participant_id']);
    array_push($response_collection, $response);
}

echo json_encode($response_collection);