<?php

CREATE TABLE authors (
    id INT AUTO_INCREMENT PRIMARY KEY,
    name VARCHAR(255)
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

// Create a new author
function createAuthor($name) {
    $conn = connectDB();
    $sql = "INSERT INTO authors (name) VALUES ('$name')";

    if ($conn->query($sql) === TRUE) {
        echo "New author created successfully";
    } else {
        echo "Error: " . $sql . "<br>" . $conn->error;
    }

    $conn->close();
}

// Read an author by ID
function readAuthor($author_id) {
    $conn = connectDB();
    $sql = "SELECT * FROM authors WHERE id = $author_id";
    $result = $conn->query($sql);

    if ($result->num_rows > 0) {
        while($row = $result->fetch_assoc()) {
            print_r($row); // Displaying author details
        }
    } else {
        echo "0 results";
    }

    $conn->close();
}

// Update an author
function updateAuthor($author_id, $name) {
    $conn = connectDB();
    $sql = "UPDATE authors SET name='$name' WHERE id = $author_id";

    if ($conn->query($sql) === TRUE) {
        echo "Author updated successfully";
    } else {
        echo "Error updating author: " . $conn->error;
    }

    $conn->close();
}

// Delete an author
function deleteAuthor($author_id) {
    $conn = connectDB();
    $sql = "DELETE FROM authors WHERE id = $author_id";

    if ($conn->query($sql) === TRUE) {
        echo "Author deleted successfully";
    } else {
        echo "Error deleting author: " . $conn->error;
    }

    $conn->close();
}
?>
