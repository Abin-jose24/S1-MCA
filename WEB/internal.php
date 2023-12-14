
<html>
	<head>
 		<title>Internal</title>
 	</head>
 	<body>
 		<h3 align="center">Internal Marks</h3>
 		<form name="internl" method="post">
 			<table align="center" cellpadding="5" border=1>
 				         <tr>
					 <td>ROLL NO</td>
					 <td><input type="number" name="roll"></td>
					 </tr>
					 <tr>
					 <td>NAME</td>
					 <td><input type="text" name="name"></td>
					 </tr>
					 <tr>
					 <td>MARK 1</td>
					 <td><input type="number" name="mark1"></td>
					 </tr>
					 <tr>
					 <td>MARK 2</td>
					 <td><input type="number" name="mark2"></td>
					 </tr>
					 <tr>
					 <td>MARK 3</td>
					 <td><input type="number" name="mark3"></td>
					 </tr>
					 <tr align="center"><td colspan="2"><input type="submit" value="Submit" name="sub">
					 <input type="reset" value="cancel"></td>
					 </table>
					 <br><br>
					 <?php
$i=0;
if(isset($_POST['sub']))
{
$roll[$i]=$_POST['roll'];
$name[$i]=$_POST['name'];
$mark1[$i]=$_POST['mark1'];
$mark2[$i]=$_POST['mark2'];
$mark3[$i]=$_POST['mark3'];
$total[$i]=$mark1[$i]+$mark2[$i]+$mark3[$i];
$i++;
$n=$i;
?>
<center><h3>Marklist</h3></center>
<tr>
   <th>SL NO</th>
   <th>NAME</th>
   <th>ROLL NO</th>
   <th>MATHS</th>
   <th>DATA STRUCTURE</th>
   <th>DIGITAL</th>
   <th>TOTAL</th>	
</tr>
<?php
for($i=0;$i<$n;$i++)
{
?>
<tr>
<td><?php echo $name[$i];?></td>
<td><?php echo $name[$i];?></td>
<td><?php echo $roll[$i];?></td>
<td><?php echo $mark1[$i];?></td>
<td><?php echo $mark2$i];?></td>
		 
					 
					 </form></body></html>
					 

