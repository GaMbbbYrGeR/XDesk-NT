vuser_init()
{
	web_url("login", 
		"URL=http://{Host}:{Port}/login", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		LAST);

	lr_start_transaction("UC03_TC01_login");

	web_submit_data("login_2", 
		"Action=http://{Host}:{Port}/api/login", 
		"Method=POST", 
		"TargetFrame=", 
		"Referer=http://{Host}:{Port}/login", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=login", "Value={login}", ENDITEM, 
		"Name=password", "Value={password}", ENDITEM, 
		"Name=rememberMe", "Value=false", ENDITEM, 
		LAST);

	web_url("/", 
		"URL=http://{Host}:{Port}/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{Host}:{Port}/login", 
		"Snapshot=t21.inf", 
		LAST);

	web_url("checkLogin", 
		"URL=http://{Host}:{Port}/api/checkLogin", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{Host}:{Port}/", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		LAST);

	web_url("info", 
		"URL=http://{Host}:{Port}/api/user/info", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{Host}:{Port}/", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		LAST);

	web_url("4", 
		"URL=http://{Host}:{Port}/api/ticket/countByState/4", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=http://{Host}:{Port}/", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		LAST);

	web_url("countByState", 
		"URL=http://{Host}:{Port}/api/ticket/countByState/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{Host}:{Port}/", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		LAST);
	
	web_reg_save_param("ticketID",
	                   "LB=\"id\":",
	                   "RB=,\"applicant\"",
	                   "Ord=All",
	                   LAST);

	web_custom_request("ticket", 
		"URL=http://{Host}:{Port}/api/ticket/?state=1&page=0&size=100", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{Host}:{Port}/", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		LAST);

	lr_end_transaction("UC03_TC01_login",LR_AUTO);
	
	return 0;
}
