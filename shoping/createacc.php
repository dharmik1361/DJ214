<!DOCTYPE html>
<html>

<head>

  <title> </title>
  <meta charset="utf-8">
  <meta name="viewport" content="width=device-width, initial-scale=1">
  <link rel="stylesheet" href="https://cdn.jsdelivr.net/npm/bootstrap@4.6.2/dist/css/bootstrap.min.css">
  <script src="https://cdn.jsdelivr.net/npm/jquery@3.6.3/dist/jquery.slim.min.js"></script>
  <link rel="stylesheet" type="text/css" href="style.css">
  <script src="https://cdn.jsdelivr.net/npm/popper.js@1.16.1/dist/umd/popper.min.js"></script>
  <script src="https://cdn.jsdelivr.net/npm/bootstrap@4.6.2/dist/js/bootstrap.bundle.min.js"></script>
  <link rel="preconnect" href="https://fonts.googleapis.com">
  <link rel="preconnect" href="https://fonts.gstatic.com" crossorigin>
  <link href="https://fonts.googleapis.com/css2?family=Josefin+Sans:wght@300&display=swap" rel="stylesheet">
</head>

<body>
  <center>

   
    <section class="">
      
      <div class="px-4 py-5 px-md-5 text-center text-lg-start" style="background-color: hsl(0, 0%, 96%)">
        <div class="container">
          <div class="row gx-lg-5 align-items-center">
            <div class="col-lg-6 mb-5 mb-lg-0">
              <h1 class="my-5 display-3 fw-bold ls-tight">
                The best offer <br />
                <span class="text-primary">for your tranking</span>
              </h1>
              <p style="color: hsl(217, 10%, 50.8%)">
              There are more than 500 forts in Maharashtra, the most for any state in India. The forts are not as grand as the ones mentioned above, in fact many are in ruins, but the importance of these forts was at its peak during Maratha Empire. You talk of forts of Maharashtra and you have to have Shivaji Maharaj associated with them. About 300 of these were either won or created by Chatrapati Shivaji Maharaj. Majority of the forts in Maharashtra have a common similarity. They all fall in the ‘Giri-durg’ category meaning a hill or mountain fortress built with a strategic mindset which could prove useful in warfare. Some of the forts are built on the summit (usually flat) of a hill or a mountain like the Torna Fort. Some others forts are situated in a valley surrounded by high, impassable hills. The Salher fort is at altitude of 5141 ft. The rock-cut stair case to these hill forts is still a marvel in construction.
              </p>
            </div>

            <div class="col-lg-6 mb-5 mb-lg-0">
              <div class="card">
                <div class="card-body py-5 px-md-5">
                  <form>
                    
                    <div class="row">
                      <div class="col-md-6 mb-4">
                        <div class="form-outline">
                          <input type="text" id="form3Example1" class="form-control" />
                          <label class="form-label" for="form3Example1">Your Id</label>
                        </div>
                      </div>
                      <div class="col-md-6 mb-4">
                        <div class="form-outline">
                          <input type="text" id="form3Example2" class="form-control" />
                          <label class="form-label" for="form3Example2">Full Name</label>
                        </div>
                      </div>
                    </div>

                   
                    <div class="form-outline mb-4">
                      <input type="email" id="form3Example3" class="form-control" />
                      <label class="form-label" for="form3Example3">Email address</label>
                    </div>

                   
                    <div class="form-outline mb-4">
                      <input type="password" id="form3Example4" class="form-control" />
                      <label class="form-label" for="form3Example4">Password</label>
                    </div>

                    <!-- Submit button -->
                    <button type="submit" class="btn btn-primary btn-block mb-4">
                      Sign up
                    </button>


                      </button>
                    </div>
                  </form>
                </div>
              </div>
            </div>
          </div>
        </div>
      </div>
      
    </section>
    
    </form>
    </section>
  </center>
</body>

</html>

<?php

$con = mysqli_connect('localhost', 'root');

if ($con) {
  echo "connection succesfull";
} else {
  echo "no connection";
}

mysqli_select_db($con, 'flip1');
if (isset($_POST['submit'])) {


  $id = $_POST['id'];
  $FullName = $_POST['name'];
  $email = $_POST['username'];
  $password = $_POST['city'];
 

  $query = "INSERT INTO `new`(`id`, `fullname`, `email`, `password`,) VALUES ('$id','$FullName','$email','$password')";

  $query = mysqli_query($con, $query);
  if ($query) {
    echo "succes";
  } else {
    echo "error";
  }
}
?>