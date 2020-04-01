
<!DOCTYPE html>
<html>
<head>
<title>Abu.</title>

<!-- Latest compiled and minified CSS -->
<link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.6/css/bootstrap.min.css" integrity="sha384-1q8mTJOASx8j1Au+a5WDVnPi2lkFfwwEAa8hDDdjZlpLegxhjVME1fgjWPGmkzs7" crossorigin="anonymous">

<!-- Optional theme -->
<link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.6/css/bootstrap-theme.min.css" integrity="sha384-fLW2N01lMqjakBkx3l/M9EahuwpSfeNvV63J5ezn3uZzapT0u7EYsXMjQV+0En5r" crossorigin="anonymous">

<!-- Custom styles for this template -->
<link href="starter-template.css" rel="stylesheet">

</head>
<body>

	<?php if(!isset($_GET['who']))
	{
		die();
	}?>

<div class="container">
<h1>Rock Paper Scissors</h1>
<p>Welcome: <?= htmlentities($_GET['who']) ?></p>
<form method="post">
<select name="human">
<option value="-1">Select</option>
<option value="0">Rock</option>
<option value="1">Paper</option>
<option value="2">Scissors</option>
<option value="3">Test</option>
</select>
<input type="submit" value="Play">

<input	type="submit" name="logout" value="Logout">
</form>

<pre>Please select a strategy and press Play.
	<?php
		if(isset($_POST['logout'])){
		header('Location: index.php');
		}
		
	$names = array('Rock', 'Paper', 'Scissors');

	$You = $_POST['human'];
	$c = array_rand($names);

	function check($You, $c)
	{

		if($You==1 && $c==1)
			{
				return "Tie";
			}
		else if($You==1 && $c==0)
			{
				return "You Win";
			}
		else if($You==1 && $c==2)
			{
				return "You Lose";
			}

		else if($You==0 && $c==1)
			{
				return "You Lose";
			}
		else if($You==0 && $c==0)
			{
				return "Tie";
			}
		else if($You==0 && $c==2)
			{
				return "You Win";
			}
		
		else if($You==2 && $c==1)
			{
				return "You Win";
			}
		else if($You==2 && $c==0)
			{
				return "You Lose";
			}
		else if($You==2 && $c==2)
			{
				return "Tie";
			}
		
	}
	
	if($You==3)
	{
		print "\n";
		for($q=0;$q<3;$q++) {
    		for($h=0;$h<3;$h++) {
        		$r = check($h, $q);
       			print "Human=$names[$h] Computer=$names[$q] Result=$r\n";
    		}
   		}
    }
    else if($You==-1)
    {

    }
    else if($You==0 || $You==1 || $You=2)
    {
    	$r = check($You, $c);

    	print "<Human=$names[$You] Computer=$names[$c] Result=$r\n";
    }


	 ?>
</pre>
</div>
</body>
</html>