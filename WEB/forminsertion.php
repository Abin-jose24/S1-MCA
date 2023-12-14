<html>
<?php
include 'conn.php';
if(isset($_POST['sub']))
{
$name=$_POST['name'];
$date=$_POST['date'];
$email=$_POST['email'];
$addrs=$_POST['address'];
$sql="insert into Student(stud_name,stud_dob,stud_email,stud_address)values('$name','$date','$email','$addrs')";
if(mysqli_query($conn,$sql))
{
?>
<script>
alert("Data Inserted");
window.location="forminsertion.php";
</script>
<?php
    }
 else
 {
 ?>
<script>
alert("Insertion unsuccessfull");
window.location="forminsertion.php";
</script>
<?php
    }
    }
    ?>

 	<head>
 	</head>
   <body>
   <form name="f1" method="post">
   <table border="1" align="center">
   <tr>
   	<th>Name</th>
   	<td><input type="text" name="name" required></td>
   </tr>   
   <tr>
   	<th>Date Of Birth</th>
   	<td><input type="date" name="date" required></td>
   </tr> 
   <tr>
   	<th>Email</th>
   	<td><input type="email" name="email" required></td>
   </tr> 
   <tr>
   	<th>Address</th>
   	<td><input type="text" name="address" required></td>
   </tr>
   <tr>
   <td colspan="2" align="center"><input type="submit" name="sub" value="submit" >
  <input type="reset" value="cancel"></td>
   </tr>
   </table>
   <br><br>
   <table border="1" align="center">
   <tr>
   <th>sl no</th>
   <th>Name</th>
   <th>Date of birth</th>
   <th>Email</th>
   <th>Address</th>
   </tr>
   <tr>
   <?php
   $sel="select * from Student" ;
   $data=mysqli_query($conn,$sel);
   if($data->num_rows>0)
   {
   while($row=$data->fetch_assoc())
   {
   ?>
   <td><?php echo $row['stud_id']?></td>
     <td><?php echo $row['stud_name']?></td>
       <td><?php echo $row['stud_dob']?></td>
         <td><?php echo $row['stud_email']?></td>
           <td><?php echo $row['stud_address']?></td>
           <tr>
      <?php
      }
      }
      else
      {
      echo "  ";
      }
      ?>
   </form>
   </body>
   </html>
  
