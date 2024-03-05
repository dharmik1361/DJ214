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
        // Get author by ID
        if (isset($_GET['id'])) {
            $author_id = $_GET['id'];
            $response = readAuthor($author_id);
        } else {
            // If no ID provided, get all authors
            $response = readAllAuthors();
        }
        break;
    case 'POST':
        // Create a new author
        $data = json_decode(file_get_contents('php://input'), true);
        $response = createAuthor($data['name']);
        break;
    case 'PUT':
        // Update an existing author
        $data = json_decode(file_get_contents('php://input'), true);
        $author_id = $_GET['id'];
        $response = updateAuthor($author_id, $data['name']);
        break;
    case 'DELETE':
        // Delete an author by ID
        $author_id = $_GET['id'];
        $response = deleteAuthor($author_id);
        break;
    default:
        // Method not allowed
        http_response_code(405);
        $response['message'] = 'Method Not Allowed';
}

// Return JSON response
echo json_encode($response);
?>
