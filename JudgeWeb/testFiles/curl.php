<?php 
$token = "12d373694649e2e696c52a5cf453f7e1e6dafd25";
$problemCode = $_POST['qid'];
$compilerId = "11";
$source = $_POST['code'];
$userId = "";
error_reporting(E_ALL);

//echo $problemCode;
	
	// 測試 Token
	$ch = curl_init('http://problems.sphere-engine.com/api/v3/test?access_token='.$token);
	curl_setopt($ch, CURLOPT_RETURNTRANSFER, 1);
	curl_setopt($ch, CURLOPT_HEADER, 0);
	curl_setopt($ch, CURLOPT_USERAGENT, 'User-Agent: curl/7.39.0');
	curl_setopt($ch, CURLOPT_HTTPHEADER, array('Content-Type: application/json'));
	$result = curl_exec($ch);
	if(curl_errno($ch)){
		echo("哭哭喔請求失敗惹0  ");
		echo curl_errno($ch);
	}
	curl_close($ch);



	echo $result;
	echo '<br />';
	//如果 $result 顯示歡迎使用 API 的字樣代表 API 正確
/*
	// 送 Submission
	$ch = curl_init("http://problems.sphere-engine.com/api/v3/submissions?access_token=".$token);
	curl_setopt($ch, CURLOPT_POST, TRUE);
	curl_setopt($ch, CURLOPT_HTTPHEADER, array("Content-Type: application/json"));
	curl_setopt($ch, CURLOPT_POSTFIELDS, "{\"problemCode\": \"".$problemCode."\", \"compilerId\": ".$compilerId.", \"source\": \"".$source."\"}");
	curl_setopt($ch, CURLOPT_RETURNTRANSFER, TRUE);
	$result = curl_exec($ch);
	//var_dump($result);
	if(curl_errno($ch)){
		echo("Err_Submission_Post");
		echo curl_errno($ch);
	}
	curl_close($ch);



	$result=json_decode($result, true);
	//var_dump($result);
	$id = $result['id']; //$id 是 Submission ID
	//echo $id;
	//echo '<br />';

	$processed = false;

	//下面是抓 Submission ID 
	while(!$processed){
		$ch = curl_init("http://problems.sphere-engine.com/api/v3/submissions/".$id."?access_token=".$token);
		curl_setopt($ch, CURLOPT_RETURNTRANSFER, 1);
		curl_setopt($ch, CURLOPT_HTTPHEADER, array("Content-Type: application/json"));
		
		$result = curl_exec($ch);
		if(curl_errno($ch)){
			echo("Err_Submission_Get");
			echo curl_errno($ch);
		}
		$result = json_decode($result, true);
		curl_close($ch);
		//if($result["status"]>10){
			$processed = true;
		//}
	}

	if($result["status"]==15){
		echo "true";
	}
	else{
		echo "false";
	}


	var_dump($result);*/
