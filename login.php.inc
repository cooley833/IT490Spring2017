
<?php

class loginDB {

private $loginDB;

public fucntion __construct()
{
	$this->$logindb = new mysqli("127.0.0.1", "root", "password", "login");

	if ($this->logindb->connect_errno != 0)
	{
		echo "Error connecting to database: " .$this->logindb->connect_error.PHP_EOL;
	
		exit(1);
	}

echo "correctly connected to database".PHP_EOL;

public function validatelogin($username, $password)
{
	print_r($response);

	$statement = "select * from users where screenname = '$username'";
	$response = $this->logindb->query($statement);

	echo "contents of user table:".PHP_EOL;
	while($row = $response->fetch_assoc())
	{
		if ($row[password] == $password)
		{
			return 1;//password match
		}
		
	}
	return 0;//no users matched username
	}
	}
}
?>
