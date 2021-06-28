	<?php
	    include("config.php");
		if(isset($_POST['submit']))
		{
			$name=$_POST['name'];
			$email=$_POST['email'];
			$mobile=$_POST['mobile'];
			$date=$_POST['date'];

			$result=mysqli_query($mysql2,"INSERT into record values('','$name','$email','$mobile','$date')");
			if (mysqli_connect_errno())
{
    echo "Failed to connect to MySQL: " . mysqli_connect_error();
    //you need to exit the script, if there is an error
    exit();
}
			if($result)
			{   
				header("location:insert.php");
				echo "Sucess";
			}
			else
			{
				echo "Failed";
			}
		}
		?>