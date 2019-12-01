vuser_end()
{
	lr_start_transaction("UC01_TC04_logout");

	web_url("logout", 
		"URL=http://{host}:{port}/api/logout", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=http://{host}:{port}/", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		LAST);

	web_url("login_3", 
		"URL=http://{host}:{port}/login", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{host}:{port}/", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("UC01_TC04_logout",LR_AUTO);
	
	return 0;
}
