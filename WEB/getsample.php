<<?php
if(isset($_GET['test']))
{
$I=$_GET['i'];
$Q=$_GET['q'];
$U=$_GET['u'];
$t=$Q*$U;

$a=1;
}
?>
<html>
	<head>
		<title>SuperMarket Bill</title>
	</head>
	<form name="form1" method="get">
		<body>
			<table border="2" align="center">
				<br><br><h3 align="center">BISMI HYPERMARKET</h3>
				<tr><th>ITEM:</th><td><input type="text" name="i"></td></tr>
				<tr><th>QUANTITY:</th><td><input type="text" name="q" ></td></tr>
				<tr><th>UNIT PRICE:</th><td><input type="text" name="u" ></td></tr>
				<tr><th colspan="2"><input type="submit" name="test" style="background-color:green" value="Submit">
			        <input type="reset"  value="Cancel" style="background-color:red"></th></tr>
	 		</table>
	 		<br><br>
			<table border="2" align="center">
				<tr>
					<th>SL NO</th>
					<th>ITEM</th>
					<th>QTY</th>
					<th>UNIT PRICE</th>
					<th>TOTAL</th>
				</tr>
				<tr>
				        <th><?php echo $a;$a=$a+1;?></th>
					<th><?php echo $I;?></th>
					<th><?php echo $Q;?></th>
					<th><?php echo $U;?></th>
					<th><?php echo $t;?></th>
				</tr>
			
			</table>
		</body>
	</form>
</html>
>
