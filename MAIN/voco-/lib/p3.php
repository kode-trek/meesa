<meta name="viewport" content="width=device-width, initial-scale=1.0">

<link rel="stylesheet" href="src.css">

<title>voco-book-submit</title>

<div align="center" id="footer">
<?php
	$_key = htmlspecialchars($_POST["key"]);
	$_val = htmlspecialchars($_POST["val"]);
	echo $_key."\n".$_val;
?>
</div>
