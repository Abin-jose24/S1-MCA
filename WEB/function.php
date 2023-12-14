<?php
if(isset($_POST['sub']))
{
function sum($a,$b)
{

return $a+$b;
}
$c=$_POST['f1'];
$d=$_POST['f2'];
echo"Sum=",sum($c,$d);
}
?>

<html>
<head>
</head>
<body>
<form method="post">
<table border=1 align="center">
<tr>
<th>Enter 1st Number</th>
<td><Input type="number" name=f1 required>
</tr>
<tr>
<th>Enter 2nd Number</th>
<td><Input type="number" name=f2 required>
</tr>
<tr>
<th colspan="2"><Input type="submit" name="sub" value="submit">
<Input type="reset"  value="Cancel"></th>
</tr>
