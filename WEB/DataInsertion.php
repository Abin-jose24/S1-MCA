<?php
include 'conn.php';
$sql="insert into Student(stud_name,stud_dob,stud_email,stud_address)Values('Adarsh','2002-10-21','adarsh101@gmail.com','jyfjhfyfyr'),('Arsha','2001-05-21','arsha123@gmail.com','ugt7t7')";
if(mysqli_query($conn,$sql))
   echo"data inserted successfully";
else 
   echo"Error in insertion",mysqli_error($conn);
$conn->close();
?>
