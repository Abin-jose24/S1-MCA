<?php
include 'conn.php';
 $sql="Create Table product(prod_id INT NOT NULL PRIMARY KEY  ,prod_name VARCHAR(25) NOT NULL ,prod_qty INT NOT NULL,prod_uprice INT NOT NULL,prod_mdate  DATE NOT NULL,prod_edate  DATE NOT NULL )";
 if(mysqli_query($conn,$sql))
    echo "Table Created Successfully";
  else 
      echo"Error in Creation";
$conn->close();
?>
