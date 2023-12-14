<?php
include 'conn.php';
 $sql="Create Table Student(stud_id INT NOT NULL PRIMARY KEY  ,stud_name VARCHAR(25) NOT NULL ,stud_dob  DATE NOT NULL,stud_email  VARCHAR(25) NOT NULL,stud_address  VARCHAR(50)NOT NULL )";
 if(mysqli_query($conn,$sql))
    echo "Table Created Successfully";
  else 
      echo"Error in Creation";
$conn->close();
?>
