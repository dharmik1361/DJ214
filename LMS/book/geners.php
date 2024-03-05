    <?php

    CREATE TABLE genres (
        id INT AUTO_INCREMENT PRIMARY KEY,
        name VARCHAR(100)
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

    // Create a new genre
    function createGenre($name) {
        $conn = connectDB();
        $sql = "INSERT INTO genres (name) VALUES ('$name')";

        if ($conn->query($sql) === TRUE) {
            echo "New genre created successfully";
        } else {
            echo "Error: " . $sql . "<br>" . $conn->error;
        }

        $conn->close();
    }

    // Read a genre by ID
    function readGenre($genre_id) {
        $conn = connectDB();
        $sql = "SELECT * FROM genres WHERE id = $genre_id";
        $result = $conn->query($sql);

        if ($result->num_rows > 0) {
            while($row = $result->fetch_assoc()) {
                print_r($row); // Displaying genre details
            }
        } else {
            echo "0 results";
        }

        $conn->close();
    }

    // Update a genre
    function updateGenre($genre_id, $name) {
        $conn = connectDB();
        $sql = "UPDATE genres SET name='$name' WHERE id = $genre_id";

        if ($conn->query($sql) === TRUE) {
            echo "Genre updated successfully";
        } else {
            echo "Error updating genre: " . $conn->error;
        }

        $conn->close();
    }

    // Delete a genre
    function deleteGenre($genre_id) {
        $conn = connectDB();
        $sql = "DELETE FROM genres WHERE id = $genre_id";

        if ($conn->query($sql) === TRUE) {
            echo "Genre deleted successfully";
        } else {
            echo "Error deleting genre: " . $conn->error;
        }

        $conn->close();
    }
    ?>
