<?php
include("config.php");
$result=mysqli_query($mysql2,"SELECT * from record ORDER by id DESC");

?>
<!DOCTYPE html>
<html>
<head>
	<meta charset="utf-8">
	<title></title>
</head>
<body>

		<form action="function.php" method="POST">
			Name<input type="text" name="name"><br>
			Email<input type="email" name="email"><br>
			Mobile<input type="number" name="mobile"><br>
			Date<input type="date" name="date"><br>
			<input type="submit" name="submit">
		</form>
	<table border="1">
	
		<?php 
		while ($res=mysqli_fetch_array($result)) {
			echo '<tr>';
			echo '<td>'.$res['name'].'<td>';
			echo '<td>'.$res['email'].'<td>';
			echo '<td>'.$res['mobile'].'<td>';
			echo '<td>'.$res['date'].'<td>';
			echo '</tr>';
		}
		?>
</table>
</body>
</html>