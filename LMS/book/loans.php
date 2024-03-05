<?php

CREATE TABLE loans (
    id INT AUTO_INCREMENT PRIMARY KEY,
    user_id INT,
    book_id INT,
    loan_date DATE,
    return_date DATE,
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

// Create a new loan
function createLoan($user_id, $book_id, $loan_date, $return_date) {
    $conn = connectDB();
    $sql = "INSERT INTO loans (user_id, book_id, loan_date, return_date) 
            VALUES ($user_id, $book_id, '$loan_date', '$return_date')";

    if ($conn->query($sql) === TRUE) {
        echo "New loan created successfully";
    } else {
        echo "Error: " . $sql . "<br>" . $conn->error;
    }

    $conn->close();
}

// Read a loan by ID
function readLoan($loan_id) {
    $conn = connectDB();
    $sql = "SELECT * FROM loans WHERE id = $loan_id";
    $result = $conn->query($sql);

    if ($result->num_rows > 0) {
        while($row = $result->fetch_assoc()) {
            print_r($row); // Displaying loan details
        }
    } else {
        echo "0 results";
    }

    $conn->close();
}

// Update a loan
function updateLoan($loan_id, $user_id, $book_id, $loan_date, $return_date) {
    $conn = connectDB();
    $sql = "UPDATE loans SET user_id=$user_id, book_id=$book_id, 
            loan_date='$loan_date', return_date='$return_date' WHERE id = $loan_id";

    if ($conn->query($sql) === TRUE) {
        echo "Loan updated successfully";
    } else {
        echo "Error updating loan: " . $conn->error;
    }

    $conn->close();
}

// Delete a loan
function deleteLoan($loan_id) {
    $conn = connectDB();
    $sql = "DELETE FROM loans WHERE id = $loan_id";

    if ($conn->query($sql) === TRUE) {
        echo "Loan deleted successfully";
    } else {
        echo "Error deleting loan: " . $conn->error;
    }

    $conn->close();
}
?>
