<?php

CREATE TABLE reviews (
    id INT AUTO_INCREMENT PRIMARY KEY,
    user_id INT,
    book_id INT,
    rating INT,
    review TEXT,
    review_date DATE,
    FOREIGN KEY (user_id) REFERENCES users(id) ON DELETE CASCADE,
    FOREIGN KEY (book_id) REFERENCES books(id) ON DELETE CASCADE
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

// Create a new review
function createReview($user_id, $book_id, $rating, $review, $review_date) {
    $conn = connectDB();
    $sql = "INSERT INTO reviews (user_id, book_id, rating, review, review_date) 
            VALUES ($user_id, $book_id, $rating, '$review', '$review_date')";

    if ($conn->query($sql) === TRUE) {
        echo "New review created successfully";
    } else {
        echo "Error: " . $sql . "<br>" . $conn->error;
    }

    $conn->close();
}

// Read a review by ID
function readReview($review_id) {
    $conn = connectDB();
    $sql = "SELECT * FROM reviews WHERE id = $review_id";
    $result = $conn->query($sql);

    if ($result->num_rows > 0) {
        while($row = $result->fetch_assoc()) {
            print_r($row); // Displaying review details
        }
    } else {
        echo "0 results";
    }

    $conn->close();
}

// Update a review
function updateReview($review_id, $user_id, $book_id, $rating, $review, $review_date) {
    $conn = connectDB();
    $sql = "UPDATE reviews SET user_id=$user_id, book_id=$book_id, 
            rating=$rating, review='$review', review_date='$review_date' WHERE id = $review_id";

    if ($conn->query($sql) === TRUE) {
        echo "Review updated successfully";
    } else {
        echo "Error updating review: " . $conn->error;
    }

    $conn->close();
}

// Delete a review
function deleteReview($review_id) {
    $conn = connectDB();
    $sql = "DELETE FROM reviews WHERE id = $review_id";

    if ($conn->query($sql) === TRUE) {
        echo "Review deleted successfully";
    } else {
        echo "Error deleting review: " . $conn->error;
    }

    $conn->close();
}
?>
