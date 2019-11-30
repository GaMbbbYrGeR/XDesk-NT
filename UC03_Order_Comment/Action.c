Action()
{

	web_add_cookie("currentCompany=0; DOMAIN={Host}");

	web_add_cookie("currentUser=master; DOMAIN={Host}");

	web_url("login", 
		"URL=http://{Host}:{Port}/login", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/css/fonts/roboto/Roboto-Light.eot?", ENDITEM, 
		"Url=/css/fonts/roboto/Roboto-Regular.eot?", ENDITEM, 
		"Url=/css/fonts/roboto/Roboto-Thin.eot?", ENDITEM, 
		"Url=/css/fonts/roboto/Roboto-Medium.eot?", ENDITEM, 
		"Url=/css/fonts/roboto/Roboto-Bold.eot?", ENDITEM, 
		"Url=/favicon.ico", "Referer=", ENDITEM, 
		"Url=/tpl/login/login.dust", ENDITEM, 
		"Url=/images/logo_2.png", ENDITEM, 
		LAST);

	lr_start_transaction("UC03_TC01_login");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	lr_think_time(13);

	web_submit_data("login_2", 
		"Action=http://{Host}:{Port}/api/login", 
		"Method=POST", 
		"TargetFrame=", 
		"Referer=http://{Host}:{Port}/login", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=login", "Value=master", ENDITEM, 
		"Name=password", "Value=123", ENDITEM, 
		"Name=rememberMe", "Value=false", ENDITEM, 
		LAST);

	web_add_cookie("PFLB.pre.login.link=null; DOMAIN={Host}");

	web_add_cookie("filterSetting="
		"%7B%22page%22%3A%22http%3A%2F%2F{Host}%3A" 
		"{Port}%2F%23tickets%3Fstate%3Dopened%26page" 
		"%3D1%22%2C%22smho%22%3Anull%2C%22dateStart%22" 
		"%3A%22%22%2C%22dateEnd%22%3A%22%22%2C%22cat1%" 
		"22%3Anull%2C%22cat2%22%3Anull%2C%22cat3%22%3A" 
		"null%2C%22cat4%22%3Anull%2C%22theme%22%3Anull" 
		"%2C%22engineer%22%3Anull%2C%22location%22%3A" 
		"null%2C%22division%22%3Anull%2C%22overdue%22%" 
		"3Afalse%2C%22filters%22%3A%7B%22newCheckbox%2" 
		"2%3Atrue%2C%22appointedCheckbox%22%3Atrue%2C%2" 
		"2performedCheckbox%22%3Atrue%2C%22controlCheckbo"
		"x%22%3Atrue%7D%7D; DOMAIN={Host}");

	web_add_cookie("filterSetting=%7B%22page%22%3A%22http" 
	               "%3A%2F%2F{Host}%3A{Port}%2F%23tasks" 
	               "%3Fstate%3Dopened%26page%3D1%22%2C%22" 
	               "smho%22%3Anull%2C%22dateStart%22%3A%2" 
	               "2%22%2C%22dateEnd%22%3A%22%22%2C%22c" 
	               "at1%22%3Anull%2C%22cat2%22%3Anull%2C" 
	               "%22cat3%22%3Anull%2C%22cat4%22%3Anull" 
	               "%2C%22theme%22%3Anull%2C%22engineer%" 
	               "22%3Anull%2C%22location%22%3Anull%2C" 
	               "%22division%22%3Anull%2C%22overdue%22" 
	               "%3Afalse%2C%22filters%22%3A%7B%7D%7D; DOMAIN={Host}");

	web_url("{Host}:{Port}", 
		"URL=http://{Host}:{Port}/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{Host}:{Port}/login", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/js/core/jqueryformplugin.js?_=1575043653255", ENDITEM, 
		"Url=/engineer/wrapper/wrapper.dust", ENDITEM, 
		"Url=/engineer/wrapper/wrapper.js", ENDITEM, 
		"Url=/css/fonts/material_icons/MaterialIcons-Regular.woff", ENDITEM, 
		"Url=/engineer/tickets/tickets.dust", ENDITEM, 
		"Url=/engineer/tickets/tickets.js", ENDITEM, 
		"Url=/engineer/tasks/tasks.dust", ENDITEM, 
		"Url=/engineer/tasks/tasks.js", ENDITEM, 
		"Url=/engineer/task/task.dust", ENDITEM, 
		"Url=/engineer/task/task.js", ENDITEM, 
		"Url=/images/logo-5ka.png", ENDITEM, 
		"Url=/tpl/support/ticketComment.dust", ENDITEM, 
		LAST);

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

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
		"URL=http://{Host}:{Port}/api/ticket/?state=-1,0,1,5&page=0&size=10", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{Host}:{Port}/", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		LAST);

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	lr_end_transaction("UC03_TC01_login",LR_AUTO);

	web_revert_auto_header("X-Requested-With");

	web_add_header("UA-CPU", 
		"AMD64");

	web_url("iecompatviewlist.xml", 
		"URL=https://iecvlist.microsoft.com/IE11/1478281996/iecompatviewlist.xml", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		LAST);

	lr_start_transaction("UC03_TC02_All_Tasks");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

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

	lr_think_time(34);

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

	lr_think_time(19);

	lr_start_transaction("UC03_TC05_logout");

	web_url("logout", 
		"URL=http://{Host}:{Port}/api/logout", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=http://{Host}:{Port}/", 
		"Snapshot=t35.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("sessionExpired=false; DOMAIN={Host}");

	web_revert_auto_header("X-Requested-With");

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


//-- 1. Ќаходим все за€вки из ticket, где state_id = -1
//
//SELECT * FROM task;
//SELECT * FROM ticket;
//
//INSERT INTO task (ID, STATE_ID, CHANGE_ID, TICKET_ID, CLIENT_ID, SOLUTION_USER_ID, SOLUTION_GROUP_ID, PRIORITY_ID, GUID, HEADER, TEXT, CREATE_DATE, LAST_EDIT_DATE, SLA_DATE, SYNC_MASK, ENGINEER_ID, CONTRACTOR_ID, STATE_REASON_ID, LAST_EDIT_USER_LOGIN, LAST_ASKO_MESSAGE_ID, LAST_ASKO_MESSAGE_DATE, EXTERNAL_ID, EXTERNAL_SYSTEM)
//SELECT ID, '1', 'IDC2D620524153zdzPWAoX9OFgW4UB', ID, APPLICANT_ID, SOLUTION_USER_ID, '9', '3', 'd830c5ee-9b77-4bd1-879a-0c4d2c282a67', HEADER, TEXT, CREATE_DATE, LAST_EDIT_DATE, SLA_DATE, SYNC_MASK, '103', '102', STATE_REASON_ID, LAST_EDIT_USER_LOGIN, LAST_ASKO_MESSAGE_ID, LAST_ASKO_MESSAGE_DATE, 'TSK_1800000', EXTERNAL_SYSTEM FROM ticket where state_id = -1
//and text Like 'IOS%';
//
//update ticket set state_id = 1;
//
//select *
//from ticket
//where state_id = 1
//and text Like 'IOS%';
//
//-- 2. »змен€ем в табл. ticket state_id на 1
//
//update ticket set state_id = 1;
//
//
//-- 3.  опируем только что измененный тикет в табл. task.  опируем только те тикеты (тикет), который только что изменили, а не все со статусом 1
//
//
//--INSERT INTO task (ID, APPLICANT_ID, SOLUTION_USER_ID, SOLUTION_GROUP_ID, PRIORITY_ID, CHANGE_ID, GUID, HEADER, TEXT, CREATE_DATE, LAST_EDIT_DATE, SLA_DATE, SYNC_MASK, ENGINEER_ID, ENGINEER_ID, CONTRACTOR_ID, STATE_REASON_ID, LAST_EDIT_USER_LOGIN, LAST_ASKO_MESSAGE_ID, LAST_ASKO_MESSAGE_DATE, EXTERNAL_ID, EXTERNAL_SYSTEM)
//--SELECT ID, CLIENT_ID, SOLUTION_USER_ID, SOLUTION_GROUP_ID, PRIORITY_ID, CHANGE_ID, GUID, HEADER, TEXT, CREATE_DATE, LAST_EDIT_DATE, SLA_DATE, SYNC_MASK, ENGINEER_ID, ENGINEER_ID, CONTRACTOR_ID, STATE_REASON_ID, LAST_EDIT_USER_LOGIN, LAST_ASKO_MESSAGE_ID, LAST_ASKO_MESSAGE_DATE, EXTERNAL_ID, EXTERNAL_SYSTEM FROM ticket;
//--UPDATE task SET STATE_ID = 1, PARENT_REMEDY_ID = PARENT_REMEDY_ID, CHANGE_ID = CHANGE_ID, TICKET_ID = TICKET_ID, PRIORITY_ID = PRIORITY_ID, WEIGHT = WEIGHT, STATE_REASON_ID = STATE_REASON_ID, AUTHOR_ID = AUTHOR_ID, START_WORKING_DATE = START_WORKING_DATE,FINISH_WORKING_DATE = FINISH_WORKING_DATE,ATTACHMENT_GUID = ATTACHMENT_GUID,SPECIALIST_DATE =SPECIALIST_DATE, IS_SPECIALIST_DATE = IS_SPECIALIST_DATE,CONTRACT_ID = CONTRACT_ID, CONTRACT_NAME = CONTRACT_NAME, RESP_ORG_ID = RESP_ORG_ID, RESP_ORG_NAME = RESP_ORG_NAME, WORK_GROUP = WORK_GROUP;
//
//select * from task where text like 'IOS%';
//
//
//rollback;