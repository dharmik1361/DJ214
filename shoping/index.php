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

    <h1> welcome to my website </h1>
    <script src="https://cdn.jsdelivr.net/npm/jquery@3.6.3/dist/jquery.slim.min.js"></script>
    <script src="https://cdn.jsdelivr.net/npm/popper.js@1.16.1/dist/umd/popper.min.js"></script>
    <script src="https://cdn.jsdelivr.net/npm/bootstrap@4.6.2/dist/js/bootstrap.bundle.min.js"></script>
    <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.0.2/dist/css/bootstrap.min.css" rel="stylesheet"
        integrity="sha384-EVSTQN3/azprG1Anm3QDgpJLIm9Nao0Yz1ztcQTwFspd3yD65VohhpuuCOmLASjC" crossorigin="anonymous">
    <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.0.2/dist/js/bootstrap.bundle.min.js"
        integrity="sha384-MrcW6ZMFYlzcLA8Nl+NtUVF0sA7MsXsP1UyJoMp4YLEuNSfAP+JcXn/tWtIaxVXM"
        crossorigin="anonymous"></script>

    <nav class="navbar navbar-expand-lg navbar-dark bg-dark">
        <div class="container-fluid">
            <a class="navbar-brand" href="#">flipkart</a>
            <button class="navbar-toggler" type="button" data-bs-toggle="collapse"
                data-bs-target="#navbarSupportedContent" aria-controls="navbarSupportedContent" aria-expanded="false"
                aria-label="Toggle navigation">
                <span class="navbar-toggler-icon"></span>
            </button>
            <div class="collapse navbar-collapse" id="navbarSupportedContent">
                <ul class="navbar-nav ml-auto mb-2 mb-lg-0">
                    <li class="nav-item">
                        <a class="nav-link active" aria-current="page" href="home.php">Home</a>
                    </li>
                    <li class="nav-item">
                        <a class="nav-link" href="#">Serviec</a>
                    </li>
                    <li class="nav-item dropdown">
                        <a class="nav-link dropdown-toggle" href="#" id="navbarDropdown" role="button"
                            data-bs-toggle="dropdown" aria-expanded="false">
                            Product
                        </a>
                        <ul class="dropdown-menu" aria-labelledby="navbarDropdown">
                            <li><a class="dropdown-item" href="mobile.php">Mbiles</a></li>
                            <li><a class="dropdown-item" href="laptop.php">Laptop</a></li>
                            <li>
                                <hr class="dropdown-divider">
                            </li>
                            <li><a class="dropdown-item" href="audio.php">Audio Product</a></li>
                        </ul>
                    </li>
                    <li class="nav-item">
                        <a class="nav-link disabled" href="about.php" tabindex="-1" aria-disabled="true">About us</a>
                    </li>
                </ul>
                <form class="d-flex">
                    <input class="form-control me-2" type="search" placeholder="Search" aria-label="Search">
                    <button class="btn btn-outline-success" type="submit">Search</button>
                </form>
            </div>
        </div>
    </nav>

    <div id="demo" class="carousel slide" data-ride="carousel">
        <ul class="carousel-indicators">
            <li data-target="#demo" data-slide-to="0" class="active"></li>
            <li data-target="#demo" data-slide-to="1"></li>
            <li data-target="#demo" data-slide-to="2"></li>
        </ul>
        <div class="carousel-inner">
            <div class="carousel-item active">
                <img src="image/f1.jpg" alt="Los Angeles" >
                <div class="carousel-caption">
                    <h3>Los Angeles</h3>
                    <p>We had such a great time in LA!</p>
                </div>
            </div>
            <div class="carousel-item">
                <img src="image/f2.jpg" alt="Chicago">
                <div class="carousel-caption">
                    <h3>flipkart</h3>
                    <p>Thank you for visiting</p>
                </div>
            </div>
            <div class="carousel-item">
                <img src="image/f3.jpg" alt="New York">
                <div class="carousel-caption">
                    <h3>New York</h3>
                    <p>We love the Big Apple!</p>
                </div>
            </div>
        </div>
        <a class="carousel-control-prev" href="#demo" data-slide="prev">
            <span class="carousel-control-prev-icon"></span>
        </a>
        <a class="carousel-control-next" href="#demo" data-slide="next">
            <span class="carousel-control-next-icon"></span>
        </a>
    </div>

    <section class="my-5">
        <div class="py-5">

            <div>
                <h2 class="text-center"> about</h2>
            </div>
            <div>
                <div class="row justify-content-around">
                    <div class="col-lg-4 col-md-4 col-12">
                        <img src="image/fl5.jfif" class="img-fluid aboutimg">
                    </div>
                    <div class="col-lg-4 col-md-4 col-12">
                        <h2 class="display-4"> FLIPKART </h2>
                        <p class="py-5">Flipkart was started by two friends Sachin Bansal and Binny Bansal. Flipkart was
                            founded in 2007 in Bangalore, India. An interesting fact is, they share the same surname but
                            they are not actually related. Sachin Bansal was born in 1981 in Chandigarh, India. In 2005,
                            Sachin graduated from the Indian Institute of Technology (IIT), Delhi, with a degree in
                            Computer Engineering he met Binny Bansal, the other founder of Flipkart. After graduation,
                            Sachin joined Techspan and shortly after this, he joined Amazon Web Services in 2006 as a
                            Senior Software Engineer. </p>
                    </div>

                    <a href="about.php" class="btn btn-outline-success"> click here</a>
                </div>
            </div>
    </section>
    <section class="my-5">
        <div class="py-5">

            <div>
                <h2 class="text-center"> Our service </h2>
                <div class="container-fluid">
                    <div class="row">
                        <div class="col-lg-4 col-md-4 col-12">

                            <div class="card">
                                <img class="card-img-top" src="image/mob.jfif" alt="Card image">
                                <div class="card-body">
                                    <h4 class="card-title">mobile</h4>
                                    <p class="card-text">Some Product.</p>
                                    <a href="#" class="btn btn-primary">See product</a>
                                </div>
                            </div>

                        </div>
                        <div class="col-lg-4 col-md-4 col-12">

                            <div class="card">
                                <img class="card-img-top" src="image/lap.jfif" alt="Card image">
                                <div class="card-body">
                                    <h4 class="card-title">laptop</h4>
                                    <p class="card-text">Some Product.</p>
                                    <a href="#" class="btn btn-primary">See product</a>
                                </div>
                            </div>

                        </div>
                        <div class="col-lg-4 col-md-4 col-12">

                            <div class="card">
                                <img class="card-img-top" src="image/images.jfif" alt="Card image">
                                <div class="card-body">
                                    <h4 class="card-title">audio product</h4>
                                    <p class="card-text">Some Product.</p>
                                    <a href="#" class="btn btn-primary">See product</a>
                                </div>
                            </div>

                        </div>
                    </div>
                </div>
                        <section class="my-5">
                            <div class="py-5">
                            <h2 class ="text-center"> login page</h2>
                        </div>
                        <div class="w-50 m-auto">
                    <form action="login.php" method="post">
                        <div class="form-group">
                            <label> username </label>
                                <input type ="text" name="user"autocomplete="off" class="form-control">
                            </div> 
                            <div class="form-group">
                            <label> emali id </label>
                                <input type ="text" name="email"autocomplete="off" class="form-control">
                            </div> 
                            <div class="form-group">
                            <label> mobile number </label>
                                <input type ="text" name="mobile"autocomplete="off" class="form-control">
                            </div> 
                            <button type="submit" class="btn btn-primary">Submit</button>
                    </form>
                    
                        </div>

                        <footer>
                           <p class = "p- bg-dark text-white text-center"> Flipkart  </p> 
                        </footer>

            </div>
</body>
</html>