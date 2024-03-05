<?php
// Include necessary headers
header('Access-Control-Allow-Methods: POST, GET, PUT, DELETE');
header('Content-Type: application/json');

// Include database connection and CRUD functions
include('database_connection.php');

// Get HTTP method
$method = $_SERVER['REQUEST_METHOD'];

// Initialize response array
$response = array();

// Check HTTP method and call appropriate function
switch ($method) {
    case 'GET':
        // Get loan by ID
        if (isset($_GET['id'])) {
            $loan_id = $_GET['id'];
            $response = readLoan($loan_id);
        } else {
            // If no ID provided, get all loans
            $response = readAllLoans();
        }
        break;
    case 'POST':
        // Create a new loan
        $data = json_decode(file_get_contents('php://input'), true);
        $response = createLoan($data['user_id'], $data['book_id'], $data['loan_date'], $data['return_date']);
        break;
    case 'PUT':
        // Update an existing loan
        $data = json_decode(file_get_contents('php://input'), true);
        $loan_id = $_GET['id'];
        $response = updateLoan($loan_id, $data['user_id'], $data['book_id'], $data['loan_date'], $data['return_date']);
        break;
    case 'DELETE':
        // Delete a loan by ID
        $loan_id = $_GET['id'];
        $response = deleteLoan($loan_id);
        break;
    default:
        // Method not allowed
        http_response_code(405);
        $response['message'] = 'Method Not Allowed';
}

// Return JSON response
echo json_encode($response);
?>
