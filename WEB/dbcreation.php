<?php
//Connection Code
$conn=new mysqli("localhost","root","");
if(!$conn)
   die("Connection Failed:".$conn->connect_error);
echo "Connected Successfully<br>";

//Database Creation
$sql="Create Database Abhinadh_mt";
if(mysqli_query($conn,$sql))
   echo "database created succcesfully";
else
   echo"Error in creating database".mysqli_error($conn);
$conn->close();
?>
