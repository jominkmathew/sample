<?php 
require 'dbConnection.php';

if (isset($_GET['search'])) {
    $filter = $_GET['search'];
    if($filter=="")
    {
        $query = "select * from books";
    }
    else
    {
        $query = "select * from books WHERE title='".$filter."'";
    }
}
else{
    $query = "select * from books";
}


$result = mysqli_query($con,$query);

echo "<h1>Book List</h1>";
echo "<table border='1'>";

echo "<form action='index.php' method='get'>";
echo "<tr style='background-color:grey;'>";
echo "<td></td>";
echo "<td colspan='2'>Search using title :</td>";
echo "<td><input type='text' name='search' required='required'>";
echo "<td><input type='submit' value='Search' style='width:100%'></td>";
echo "</tr>";
echo "</form>";

echo "<tr><th>Accession Number</th><th>Title</th><th>Authors</th><th>Edition</th><th>Publisher</th></tr>";


if(mysqli_num_rows($result) > 0)
{
    while($row = mysqli_fetch_assoc($result))
    {
        echo "<tr><td>".$row["access_number"]."</td><td>".$row["title"]."</td><td>".$row["authors"]."</td><td>".$row["edition"]."</td><td>".$row["publisher"]."</td></tr>";
    }    
    
}

echo "<form action='insert.php' method='post'><tr>";
echo "<td><input type='text' name='access_number' required='required'></td>";
echo "<td><input type='text' name='title' required='required'></td>";
echo "<td><input type='text' name='authors' required='required'></td>";
echo "<td><input type='text' name='edition' required='required'></td>";
echo "<td><input type='text' name='publisher' required='required'></td>";
echo"</tr>";
echo "<tr style='background-color:grey;'><td colspan='4'></td><td><input type='submit' value='ADD' style='width:100%'></td></tr>";
echo "</form>";
echo "</table>";

mysqli_close($con);

?>