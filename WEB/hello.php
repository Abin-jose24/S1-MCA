<?php
if(isset($_POST['sub']))
{ 
$a=$_POST['fst'];
$b=$_POST['snd'];
$c=$a+$b;
echo "Sum=",($c);
}

?>
<html>
	<head>
		<title>Sum Of Two</title>
		
		
	</head>
	<body>
	<form id="form2" method="post">
		<table border="2" align="center">
			<brr><br><h3 align="center">Sum Of Two</h3>
			<tr><th>Enter First Number:</th><td><input type="text" name="fst" ></td></tr>
			<tr><th>Enter Second Number:</th><td><input type="text"  name="snd" ></td></tr>
			<tr><th colspan="2"><input type="submit" name="sub" value="Submit">
			     <input type="reset"  value="Cancel"></th></tr>
	 	</table>
	 </form>
	</body>
</html>
