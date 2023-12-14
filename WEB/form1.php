<html>
	<head>
		<title>Javascript intro</title>
		<script type="text/javascript">
		#FOR RUNNING IN CLIENT SIDE
			function show(){
			var n=document.getElementById("name").value;
			var a=document.getElementById("age").value;
			document.write("Name="+n+"<br>Age="+a);
			}
		function cancel(){
			document.getElementById("form1").reset();
			}
		</script>
		
	</head>
	<body>
	<form id="form1" action="form1.php" method="post">
		<table border="2" align="center">
			<brr><br><h3 align="center">Enter Your Details</h3>
			<tr><th>Enter Your Name:</th><td><input type="text" name="n" id="name" ></td></tr>
			<tr><th>Age:</th><td><input type="text" id="age" name="a" ></td></tr>
			<tr><th colspan="2"><input type="submit" name="test" value="Show" Onclick="show()">
			     <input type="button"  value="Cancel" Onclick="cancel()"></th></tr>
	 	</table>
	 </form>
	</body>
</html>
#for RUNNING IN SERVER SIDE
<?php 
if(isset($_POST['test']))
{
$c=$_POST['n'];
$d=$_POST['a'];
echo "<br>Name=",$c;
echo "<br>Age=",$d;
}
?>

