<?php
include'conn1.php';
if(isset($_POST['b1']))
{
$s ="create table aakash(id int primary key,name varchar(90),place varchar(30),girlfrind varchar(30))";
if($conn1->query($s))
{
echo"table craetion succefull";
}
else
{

$id=$_POST['n'];
$name=$_POST['n1'];
$place=$_POST['n3'];
$gf=$_POST['n4'];
$in="insert into aakash(id,name,place,girlfrind)values('$id','$name','$place','$gf')";
if($conn1->query($in))
{
echo"data inserted";
}
}
}
 ?>
 <html>
 <head>
 
 </head>
 <body>
 <form method="post">
 <table border="2" cellpadding="2" >
 <tr> 
 <th>
 	id</th>
 	<th><input type="text"  name="n"></th>
 	</tr>
 <tr>
 <th>name</th><td><input type="text" name="n1"></td>
 </tr>
 <tr>
 <th>place</th><td><input type="text" name="n3"></td>
 </tr>
 <tr>
 <th>girlfriend</th><th><input type="text" name="n4"></th>
 </tr>
</table>
<input type="submit" value="submit"name="b1">
</from>
</body>
</html>
