<html>
<?php
include 'conn.php';
if(isset($_POST['sub']))
{
$name=$_POST['name'];
$qty=$_POST['qty'];
$uprice=$_POST['uprice'];
$mdate=$_POST['mdate'];
$edate=$_POST['edate'];
$tot=$uprice*$qty;
$sql="insert into product(prod_name,prod_qty,prod_uprice,prod_mdate,prod_edate,prod_tot)values('$name','$qty','$uprice','$mdate','$edate','$tot')";
if(mysqli_query($conn,$sql))
{
?>
<script>
alert("Data Inserted");
window.location="productform.php";
</script>
<?php
    }
 else
 {
 ?>
<script>
alert("Insertion unsuccessfull");
window.location="productform.php";
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
   	<th>Product Name</th>
   	<td><input type="text" name="name" required></td>
   </tr>   
   <tr>
   	<th>Quantity</th>
   	<td><input type="number" name="qty" required></td>
   </tr> 
   <tr>
   	<th>Unit Price</th>
   	<td><input type="number" name="uprice" required></td>
   </tr> 
   <tr>
   	<th>Manufacturing Date</th>
   	<td><input type="date" name="mdate" required></td>
   </tr>
    <tr>
   	<th>Expiry Date</th>
   	<td><input type="date" name="edate" required></td>
   </tr>
   
   <tr>
   <td colspan="2" align="center"><input type="submit" name="sub" value="submit" >
  <input type="reset" value="cancel"></td>
   </tr>
   </table>
   <br><br>
   <table border="1" align="center">
   <tr>
   <th>Sl no</th>
   <th> Product Name</th>
   <th>Quantity</th>
   <th>Unit Price</th>
<th>Manufacturing Date</th>
   <th>Expiry Date</th>
    <th>Total</th>
   </tr>
   <tr>
   <?php
   $sel="select * from product" ;
   $data=mysqli_query($conn,$sel);
   if($data->num_rows>0)
   {
   while($row=$data->fetch_assoc())
   {
   ?>
   <td><?php echo $row['prod_id']?></td>
     <td><?php echo $row['prod_name']?></td>
       <td><?php echo $row['prod_qty']?></td>
<td><?php echo $row['prod_uprice']?></td>        
<td><?php echo $row['prod_mdate']?></td>
<td><?php echo $row['prod_edate']?></td>
  <td><?php echo $row['prod_tot']?></td>      
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
  
