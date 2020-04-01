<!DOCTYPE html>
<html>
<head>
	<title>
		Danyal Jamil's MD5 Cracker
	</title>
</head>
<body>

	<h1>MD5 cracker</h1>

	<p>This application takes an MD5 hash
	of a two-character lower case string and 
	attempts to hash all two-character combinations
	to determine the original two characters.</p>

	<p>Debug Output:</p>

	<?php 
		$goodtext = "Not found";

		if(isset($_GET['md5']))
		{
			$time_pre = microtime(true);
			$md5 = $_GET['md5'];
			$show = 15;
			$try = '0000';

			for($i=0; $i<10000; $i++)
			{
				for($j=0; $j<20	; $j++)
				{
					$temp = intval($try) + 1;

					$try = strval($temp);

					$check = hash('md5', $try);

					if ($check == $md5)
					{
						$goodtext = $try;
						break;
					}

					if ($show > 0)
					{
	                	print "<pre>$check $try	</pre>";
	                	$show = $show - 1;
            		}
				}
			}

			$time_post = microtime(true);

		    $time = $time_post-$time_pre;
		}
	 ?>

	<p>Elapsed time: <?= htmlentities($time); ?></p>
	<p>Original Text: <?= htmlentities($goodtext); ?></p>

	<form>
		<input type="text" name="md5" size="60" />
		<input type="submit" value="Crack MD5"/>
	</form>
	
</body>
</html>