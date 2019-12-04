vuser_init()
{
	web_url("login", 
		"URL=http://{Host}:{Port}/login", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	lr_start_transaction("UC04_TC01_login");

	web_submit_data("login_2", 
		"Action=http://{Host}:{Port}/api/login", 
		"Method=POST", 
		"Referer=http://{Host}:{Port}/login", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=login", "Value={login}", ENDITEM, 
		"Name=password", "Value={password}", ENDITEM, 
		"Name=rememberMe", "Value=false", ENDITEM, 
		LAST);

	web_url("/", 
		"URL=http://{Host}:{Port}/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{Host}:{Port}/login", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		LAST);

	web_url("checkLogin", 
		"URL=http://{Host}:{Port}/api/checkLogin", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{Host}:{Port}/", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		LAST);

	web_url("info", 
		"URL=http://{Host}:{Port}/api/user/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{Host}:{Port}/", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		LAST);

	web_url("4", 
		"URL=http://{Host}:{Port}/api/ticket/countByState/4", 
		"Resource=0", 
		"Referer=http://{Host}:{Port}/", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		LAST);

	web_url("countByState", 
		"URL=http://{Host}:{Port}/api/ticket/countByState/", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{Host}:{Port}/", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		LAST);
	
	web_reg_save_param("ticketID",
	                   "LB=\"id\":",
	                   "RB=,\"applicant\"",
	                   "Ord=All",
	                   LAST);

	web_custom_request("ticket", 
		"URL=http://{Host}:{Port}/api/ticket/?state=1&page=0&size=50", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{Host}:{Port}/", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		LAST);

	lr_end_transaction("UC04_TC01_login",LR_AUTO);
	
	return 0;
}
