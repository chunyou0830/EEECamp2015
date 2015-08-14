<?php
	error_reporting(E_ALL);
	$ScoreA = 86;
	$ScoreB = 90;
	$ScoreTotal = $ScoreA = $ScoreB;
	echo $ScoreTotal;
	$retmsg = system("curl -X GET -H 'Content-Type: application/json'  \"http://problems.sphere-engine.com/api/v3/test?access_token=12d373694649e2e696c52a5cf453f7e1e6dafd25\"",$ret);
	echo "NEXT";
	echo $retmsg;
	echo "NEXT";
	echo $ret;
?>