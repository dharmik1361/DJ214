<?php

header('Access-Control-Allow-Methods: POST');
header('Content-Type: application/json');

// Include API class
include('users.php');

$responce_array = [];

if($_SERVER['REQUEST_METHOD'] == 'POST') {

    $email = $_POST['email'];
    $username = $_POST['username'];
    $password = $_POST['password'];

    $api = new API();

    $hashed_password = password_hash($password, PASSWORD_DEFAULT);

    $response = $api->signupUserData($email, $username, $hashed_password);

    http_response_code(201);

    if($response) {
        $response_array['msg'] = "User inserted successfully...";
    }
    else {
        $response_array['msg'] = "User insertion failed...";
    }

    // Return JSON response
    echo json_encode($response_array);
}
else {
    // If request method is not POST, return an error message
    $response_array['msg'] = "Only POST method is allowed...";

    // Return JSON response
    echo json_encode($response_array);
}
?>
