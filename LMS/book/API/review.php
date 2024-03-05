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
        // Get review by ID
        if (isset($_GET['id'])) {
            $review_id = $_GET['id'];
            $response = readReview($review_id);
        } else {
            // If no ID provided, get all reviews
            $response = readAllReviews();
        }
        break;
    case 'POST':
        // Create a new review
        $data = json_decode(file_get_contents('php://input'), true);
        $response = createReview($data['user_id'], $data['book_id'], $data['rating'], $data['review'], $data['review_date']);
        break;
    case 'PUT':
        // Update an existing review
        $data = json_decode(file_get_contents('php://input'), true);
        $review_id = $_GET['id'];
        $response = updateReview($review_id, $data['user_id'], $data['book_id'], $data['rating'], $data['review'], $data['review_date']);
        break;
    case 'DELETE':
        // Delete a review by ID
        $review_id = $_GET['id'];
        $response = deleteReview($review_id);
        break;
    default:
        // Method not allowed
        http_response_code(405);
        $response['message'] = 'Method Not Allowed';
}

// Return JSON response
echo json_encode($response);
?>
