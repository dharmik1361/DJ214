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
        // Get genre by ID
        if (isset($_GET['id'])) {
            $genre_id = $_GET['id'];
            $response = readGenre($genre_id);
        } else {
            // If no ID provided, get all genres
            $response = readAllGenres();
        }
        break;
    case 'POST':
        // Create a new genre
        $data = json_decode(file_get_contents('php://input'), true);
        $response = createGenre($data['name']);
        break;
    case 'PUT':
        // Update an existing genre
        $data = json_decode(file_get_contents('php://input'), true);
        $genre_id = $_GET['id'];
        $response = updateGenre($genre_id, $data['name']);
        break;
    case 'DELETE':
        // Delete a genre by ID
        $genre_id = $_GET['id'];
        $response = deleteGenre($genre_id);
        break;
    default:
        // Method not allowed
        http_response_code(405);
        $response['message'] = 'Method Not Allowed';
}

// Return JSON response
echo json_encode($response);
?>
