Action()
{

	lr_start_transaction("UC04_TC02_All_Tasks");

	web_url("countByState_2", 
		"URL=http://{Host}:{Port}/api/task/countByState/", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{Host}:{Port}/", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("task", 
		"URL=http://{Host}:{Port}/api/task/?state=1&page=0&size=10", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{Host}:{Port}/", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		LAST);

	lr_end_transaction("UC04_TC02_All_Tasks",LR_AUTO);

	lr_start_transaction("UC04_TC03_Choose_Task");
	
	lr_save_string(lr_paramarr_random("ticketID"), "ticketIDRandom");

	web_url("{ticketIDRandom}", 
		"URL=http://{Host}:{Port}/api/task/{ticketIDRandom}", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{Host}:{Port}/", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		LAST);

	web_url("checkLogin_2", 
		"URL=http://{Host}:{Port}/api/checkLogin", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{Host}:{Port}/", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		LAST);

	web_url("comment", 
		"URL=http://{Host}:{Port}/api/ticket/{ticketIDRandom}/comment/", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{Host}:{Port}/", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("UC04_TC03_Choose_Task",LR_AUTO);

	lr_start_transaction("UC04_TC04_In_Incedent");

	web_custom_request("{ticketIDRandom}_2", 
		"URL=http://{Host}:{Port}/api/ticket/{ticketIDRandom}", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{Host}:{Port}/", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		LAST);

	web_url("comment_2", 
		"URL=http://{Host}:{Port}/api/ticket/{ticketIDRandom}/comment/", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{Host}:{Port}/", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("UC04_TC04_In_Incedent",LR_AUTO);

	lr_start_transaction("UC04_TC05_Close_Incedent");

	web_custom_request("solve", 
		"URL=http://{Host}:{Port}/api/ticket/{ticketIDRandom}/solve/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{Host}:{Port}/", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_url("/_2", 
		"URL=http://{Host}:{Port}/", 
		"Resource=0", 
		"Referer=http://{Host}:{Port}/", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		EXTRARES,
		"Url=/js/core/jqueryformplugin.js?_=1575134476345", ENDITEM, 
		"Url=/engineer/wrapper/wrapper.dust", ENDITEM, 
		"Url=/engineer/wrapper/wrapper.js", ENDITEM, 
		"Url=/engineer/tickets/tickets.dust", ENDITEM, 
		"Url=/engineer/tickets/tickets.js", ENDITEM, 
		"Url=/engineer/tasks/tasks.dust", ENDITEM, 
		"Url=/engineer/tasks/tasks.js", ENDITEM, 
		LAST);

	web_url("checkLogin_3", 
		"URL=http://{Host}:{Port}/api/checkLogin", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{Host}:{Port}/", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		LAST);

	web_url("info_2", 
		"URL=http://{Host}:{Port}/api/user/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{Host}:{Port}/", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		LAST);

	web_url("4_2", 
		"URL=http://{Host}:{Port}/api/ticket/countByState/4", 
		"Resource=0", 
		"Referer=http://{Host}:{Port}/", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		LAST);

	web_url("countByState_3", 
		"URL=http://{Host}:{Port}/api/ticket/countByState/", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{Host}:{Port}/", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		LAST);

	web_url("countByState_4", 
		"URL=http://{Host}:{Port}/api/task/countByState/", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{Host}:{Port}/", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		"Url=/api/report/{ticketIDRandom}?timeZoneOffset=3", "Referer=", ENDITEM, 
		LAST);

	web_custom_request("task_2", 
		"URL=http://{Host}:{Port}/api/task/?state=1&page=0&size=10", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{Host}:{Port}/", 
		"Snapshot=t32.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		LAST);

	web_custom_request("ticket_2", 
		"URL=http://{Host}:{Port}/api/ticket/?state=-1,0,1,5&page=0&size=10", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{Host}:{Port}/", 
		"Snapshot=t33.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		LAST);

	lr_end_transaction("UC04_TC05_Close_Incedent",LR_AUTO);

	return 0;
}