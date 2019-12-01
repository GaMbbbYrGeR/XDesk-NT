vuser_end()
{
	lr_start_transaction("UC03_TC05_logout");

	web_url("logout", 
		"URL=http://{Host}:{Port}/api/logout", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=http://{Host}:{Port}/", 
		"Snapshot=t35.inf", 
		"Mode=HTML", 
		LAST);

	web_url("login_3", 
		"URL=http://{Host}:{Port}/login", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{Host}:{Port}/", 
		"Snapshot=t36.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("UC03_TC05_logout",LR_AUTO);
	
	return 0;
}
