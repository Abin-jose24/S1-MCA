<?php
if(isset($_POST['test']))
{
$I=$_POST['i'];
$Q=$_POST['q'];
$U=$_POST['u'];
$t=$Q*$U;
$bill=array($I,$Q,$U,$t);

}
?>
<html>
	<head>
		<title>SuperMarket Bill</title>
	</head>
	<form name="form1" method="post">
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
				        <th>1</th>
					<th><?php echo $bill[0];?></th>
					<th><?php echo $bill[1];?></th>
					<th><?php echo $bill[2];?></th>
					<th><?php echo $bill[3];?></th>
				</tr>
			
			</table>
		</body>
	</form>
</html>

