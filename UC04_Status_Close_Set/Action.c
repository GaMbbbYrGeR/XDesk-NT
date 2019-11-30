Action()
{

	web_add_auto_header("UA-CPU", 
		"AMD64");

	web_revert_auto_header("UA-CPU");

	web_url("login", 
		"URL=http://{Host}:{Port}/login", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/css/fonts/roboto/Roboto-Light.eot?", ENDITEM, 
		"Url=/css/fonts/roboto/Roboto-Thin.eot?", ENDITEM, 
		"Url=/css/fonts/roboto/Roboto-Regular.eot?", ENDITEM, 
		"Url=/css/fonts/roboto/Roboto-Medium.eot?", ENDITEM, 
		"Url=/css/fonts/roboto/Roboto-Bold.eot?", ENDITEM, 
		"Url=/favicon.ico", "Referer=", ENDITEM, 
		"Url=/tpl/login/login.dust", ENDITEM, 
		"Url=/images/logo_2.png", ENDITEM, 
		LAST);

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	lr_start_transaction("UC04_TC01_login");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("login_2", 
		"Action=http://{Host}:{Port}/api/login", 
		"Method=POST", 
		"Referer=http://{Host}:{Port}/login", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=login", "Value=master", ENDITEM, 
		"Name=password", "Value=123", ENDITEM, 
		"Name=rememberMe", "Value=false", ENDITEM, 
		LAST);

	web_add_cookie("currentCompany=0; DOMAIN={Host}");

	web_add_cookie("currentUser=master; DOMAIN={Host}");

	web_add_cookie("PFLB.pre.login.link=null; DOMAIN={Host}");

	web_add_cookie("filterSetting="
		"%7B%22page%22%3A%22http%3A%2F%2F{Host}" 
		"%3A{Port}%2F%23tickets%3Fstate%3Dopened" 
		"%26page%3D1%22%2C%22smho%22%3Anull%2C%" 
		"22dateStart%22%3A%22%22%2C%22dateEnd%22" 
		"%3A%22%22%2C%22cat1%22%3Anull%2C%22cat2%" 
		"22%3Anull%2C%22cat3%22%3Anull%2C%22cat4%" 
		"22%3Anull%2C%22theme%22%3Anull%2C%22" 
		"engineer%22%3Anull%2C%22location%22%" 
		"3Anull%2C%22division%22%3Anull%2C%22overdue" 
		"%22%3Afalse%2C%22filters%22%3A%7B%22new" 
		"Checkbox%22%3Atrue%2C%22appointedCheckbox" 
		"%22%3Atrue%2C%22performedCheckbox%22%" 
		"3Atrue%2C%22controlCheckbo"
		"x%22%3Atrue%7D%7D; DOMAIN={Host}");

	web_add_cookie("filterSetting=%7B%22page%22%3A%22http%3A%2F%2F{Host}" 
	               "%3A{Port}%2F%23tasks%3Fstate%3Dopened%26page%3D1%22%" 
	               "2C%22smho%22%3Anull%2C%22dateStart%22%3A%22%22%2C%" 
	               "22dateEnd%22%3A%22%22%2C%22cat1%22%3Anull%2C%22cat2%" 
	               "22%3Anull%2C%22cat3%22%3Anull%2C%22cat4%22%3Anull%2C%" 
	               "22theme%22%3Anull%2C%22engineer%22%3Anull%2C%22location" 
	               "%22%3Anull%2C%22division%22%3Anull%2C%22overdue%22%" 
	               "3Afalse%2C%22filters%22%3A%7B%7D%7D; DOMAIN={Host}");

	web_url("{Host}:{Port}", 
		"URL=http://{Host}:{Port}/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{Host}:{Port}/login", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/js/core/jqueryformplugin.js?_=1575134331417", ENDITEM, 
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
		"Url=/engineer/ticket/ticket.dust", ENDITEM, 
		"Url=/engineer/ticket/ticket.js", ENDITEM, 
		"Url=/images/custom.png", ENDITEM, 
		"Url=/tpl/comment.dust", ENDITEM, 
		LAST);

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

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
		"URL=http://{Host}:{Port}/api/ticket/?state=-1,0,1,5&page=0&size=10", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{Host}:{Port}/", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		LAST);

	lr_end_transaction("UC04_TC01_login",LR_AUTO);

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

	lr_think_time(24);

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

	web_revert_auto_header("X-Requested-With");

	web_url("{Host}:{Port}_2", 
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

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

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
		EXTRARES, 
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

	lr_think_time(26);

	lr_start_transaction("UC04_TC06_logout");

	web_url("logout", 
		"URL=http://{Host}:{Port}/api/logout", 
		"Resource=0", 
		"Referer=http://{Host}:{Port}/", 
		"Snapshot=t34.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("sessionExpired=false; DOMAIN={Host}");

	web_revert_auto_header("X-Requested-With");

	web_url("login_3", 
		"URL=http://{Host}:{Port}/login", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{Host}:{Port}/", 
		"Snapshot=t35.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("UC04_TC06_logout",LR_AUTO);

	return 0;
}