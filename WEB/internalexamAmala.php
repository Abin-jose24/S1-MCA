<html>
<title>LULU Supermarket</title>
<script>
	function validation()
	{
		if(document.forms.f1.n1.value=="")
		{
			window.alert("Please enter itemid");
			document.forms.f1.n1.focus();
		}
		else if(document.forms.f1.n2.value=="")
		{
			window.alert("Please enter itemname");
			document.forms.f1.n2.focus();
		}
		else if(document.forms.f1.n3.value=="")
		{
			window.alert("Please enter itemno");
			document.forms.f1.n3.focus();
		}
		else if(document.forms.f1.n4.value=="")
		{
			window.alert("Please enter unitprice");
			document.forms.f1.n4.focus();
		}
	}
</script>
<body>
<style>
body
{
	background-color:rgba(120,250,35,0.056);
}
th,td
{
	text-align:"center";
}
</style>
<center>
<h3 style="color:green">LULU Supermarket</h3>
<form id="f1" method="post">
<table width="40%" cellpadding="10">
<tr>
	<th>item id</th>
	<th>item name</th>
	<th>item no</th>
	<th>unitprice</th>
</tr>
<?php
for($i=1;$i<5;$i++)
{
	$itemid="itemid".$i;
	$itemname="itemname".$i;
	$itemno="itemno".$i;
	$unitprice="unitprice".$i;
?>
<tr>
	<td><input type="number" id="n1" name=<?php echo $itemid; ?>></td>
	<td><input type="text" id="n2" name=<?php echo $itemname; ?>></td>
	<td><input type="number" id="n3" name=<?php echo $itemno; ?>></td>
	<td><input type="number" id="n4" name=<?php echo $unitprice; ?>></td>
</tr>
<?php
}
?>
</table>
<input type="submit" value="submit" name="sub" onclick="validation()">
</form>
</center>
<?php
if(isset($_POST['sub']))
{
	$grandtotal=0;
?>
<center>
<table width="40%" cellpadding="10">
<tr>
	<th>item id</th>
	<th>item name</th>
	<th>item no</th>
	<th>unitprice</th>
	<th>total</th>
</tr>
<?php
	for($i=1;$i<5;$i++)
{
	$grandtotal=0;
	$itemid="itemid".$i;
	$itemname="itemname".$i;
	$itemno="itemno".$i;
	$unitprice="unitprice".$i;
	$id=$_POST[$itemid];
	$name=$_POST[$itemname];
	$no=$_POST[$itemno];
	$price=$_POST[$unitprice];
	$total=$no * $price;
	$grandtotal=$grandtotal + $total;
?>
<tr>
	<td><?php echo $id; ?></td>
	<td><?php echo $name; ?></td>
	<td><?php echo $no; ?></td>
	<td><?php echo $price; ?></td>
	<td><?php echo $total; ?></td>
</tr>
//<?php
//}
//?>
<tr>
	<td>Grandtotal : </td>
	<td><?php echo $grandtotal; ?></td>
</tr>
<?php
}
}
?>
</table>
</center>
</body>
</html>

