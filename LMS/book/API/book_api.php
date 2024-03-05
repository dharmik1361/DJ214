<?php
header('Access-Control-Allow-Methods: POST, GET, PUT, DELETE');
header('Content-Type: application/json');

include('database_connection.php');

// Get HTTP method
$method = $_SERVER['REQUEST_METHOD'];

$response = array();

switch ($method) {
    case 'GET':
        if (isset($_GET['id'])) {
            $book_id = $_GET['id'];
            $response = readBook($book_id);
        } else {
            $response = readAllBooks();
        }
        break;
    case 'POST':
        $data = json_decode(file_get_contents('php://input'), true);
        $response = createBook($data['title'], $data['author_id'], $data['genre_id'], $data['ISBN'], $data['quantity']);
        break;
    case 'PUT':
        $data = json_decode(file_get_contents('php://input'), true);
        $book_id = $_GET['id'];
        $response = updateBook($book_id, $data['title'], $data['author_id'], $data['genre_id'], $data['ISBN'], $data['quantity']);
        break;
    case 'DELETE':
        $book_id = $_GET['id'];
        $response = deleteBook($book_id);
        break;
    default:
        http_response_code(405);
        $response['message'] = 'Method Not Allowed';
}

// Return JSON response
echo json_encode($response);
?>
