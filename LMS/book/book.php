<?php
CREATE TABLE books (
    id INT AUTO_INCREMENT PRIMARY KEY,
    title VARCHAR(255),
    author_id INT,
    genre_id INT,
    ISBN VARCHAR(20),
    quantity INT,
    FOREIGN KEY (author_id) REFERENCES authors(id) ON DELETE CASCADE,
    FOREIGN KEY (genre_id) REFERENCES genres(id) ON DELETE CASCADE
);


// Function to establish database connection
function connectDB() {
    $servername = "localhost";
    $username = "your_username";
    $password = "your_password";
    $dbname = "your_database";

    $conn = new mysqli($servername, $username, $password, $dbname);
    if ($conn->connect_error) {
        die("Connection failed: " . $conn->connect_error);
    }
    return $conn;
}

// Create a new book
function createBook($title, $author_id, $genre_id, $ISBN, $quantity) {
    $conn = connectDB();
    $sql = "INSERT INTO books (title, author_id, genre_id, ISBN, quantity) 
            VALUES ('$title', $author_id, $genre_id, '$ISBN', $quantity)";

    if ($conn->query($sql) === TRUE) {
        echo "New book created successfully";
    } else {
        echo "Error: " . $sql . "<br>" . $conn->error;
    }

    $conn->close();
}

// Read a book by ID
function readBook($book_id) {
    $conn = connectDB();
    $sql = "SELECT * FROM books WHERE id = $book_id";
    $result = $conn->query($sql);

    if ($result->num_rows > 0) {
        while($row = $result->fetch_assoc()) {
            print_r($row); // Displaying book details
        }
    } else {
        echo "0 results";
    }

    $conn->close();
}

// Update a book
function updateBook($book_id, $title, $author_id, $genre_id, $ISBN, $quantity) {
    $conn = connectDB();
    $sql = "UPDATE books SET title='$title', author_id=$author_id, genre_id=$genre_id, 
            ISBN='$ISBN', quantity=$quantity WHERE id = $book_id";

    if ($conn->query($sql) === TRUE) {
        echo "Book updated successfully";
    } else {
        echo "Error updating book: " . $conn->error;
    }

    $conn->close();
}

// Delete a book
function deleteBook($book_id) {
    $conn = connectDB();
    $sql = "DELETE FROM books WHERE id = $book_id";

    if ($conn->query($sql) === TRUE) {
        echo "Book deleted successfully";
    } else {
        echo "Error deleting book: " . $conn->error;
    }

    $conn->close();
}

?>
