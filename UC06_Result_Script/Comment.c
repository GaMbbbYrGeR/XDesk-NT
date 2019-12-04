Comment()
{
	lr_start_transaction("UC03_TC02_All_Tasks");

	web_url("countByState_2", 
		"URL=http://{Host}:{Port}/api/task/countByState/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{Host}:{Port}/", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("task", 
		"URL=http://{Host}:{Port}/api/task/?state=1&page=0&size=10", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{Host}:{Port}/", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		LAST);

	lr_end_transaction("UC03_TC02_All_Tasks",LR_AUTO);

	lr_start_transaction("UC03_TC03_Choose_Task");
	
	lr_save_string(lr_paramarr_random("ticketID"), "ticketIDRandom");

	web_url("{ticketIDRandom}", 
		"URL=http://{Host}:{Port}/api/task/149758", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{Host}:{Port}/", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		LAST);

	web_url("checkLogin_2", 
		"URL=http://{Host}:{Port}/api/checkLogin", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{Host}:{Port}/", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		LAST);

	web_url("comment", 
		"URL=http://{Host}:{Port}/api/ticket/{ticketIDRandom}/comment/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{Host}:{Port}/", 
		"Snapshot=t32.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("UC03_TC03_Choose_Task",LR_AUTO);

	lr_start_transaction("UC03_TC04_Write_Comment");

	web_custom_request("comment_2", 
		"URL=http://{Host}:{Port}/api/ticket/{ticketIDRandom}/comment/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{Host}:{Port}/", 
		"Snapshot=t33.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"text\":\"{Comment}\",\"files\":[]}", 
		LAST);

	web_url("comment_3", 
		"URL=http://{Host}:{Port}/api/ticket/{ticketIDRandom}/comment/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{Host}:{Port}/", 
		"Snapshot=t34.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("UC03_TC04_Write_Comment",LR_AUTO);

	return 0;
}