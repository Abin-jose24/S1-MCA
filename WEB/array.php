
<?php 
# simple array or indexed array
$names=array("Arjun","Abhishek","Arya","Sugu");
for($i=0;$i<count($names);$i++)
   echo $names[$i],"<br>";

  
 # Associative array
  echo"<br><br>";
 $age=array("1"=>"Vijay","2"=>"Surya","3"=>"Dileep","4"=>"Mohan");
 foreach($age as $a=>$name)
   echo $a,".",$name,"<br>";
 ?>
