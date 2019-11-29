Action()
{

	web_url("learning2.pflb.ru:56902", 
		"URL=http://{host}:{port}/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/css/fonts/roboto/Roboto-Light.eot?", ENDITEM, 
		"Url=/css/fonts/roboto/Roboto-Thin.eot?", ENDITEM, 
		"Url=/css/fonts/roboto/Roboto-Regular.eot?", ENDITEM, 
		"Url=/css/fonts/roboto/Roboto-Medium.eot?", ENDITEM, 
		"Url=/css/fonts/roboto/Roboto-Bold.eot?", ENDITEM, 
		"Url=/js/core/jqueryformplugin.js?_=1574683393916", ENDITEM, 
		"Url=/favicon.ico", "Referer=", ENDITEM, 
		LAST);

	web_add_cookie("sessionExpired=true; DOMAIN={host}");

	web_url("login", 
		"URL=http://{host}:{port}/login", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{host}:{port}/", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/tpl/login/login.dust", ENDITEM, 
		"Url=/images/logo_2.png", ENDITEM, 
		LAST);

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_add_header("UA-CPU", 
		"AMD64");

	web_url("iecompatviewlist.xml", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	lr_start_transaction("UC01_TC01_login");

	web_add_cookie("sessionExpired=false; DOMAIN={host}");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	lr_think_time(57);

	web_submit_data("login_2", 
		"Action=http://{host}:{port}/api/login", 
		"Method=POST", 
		"TargetFrame=", 
		"Referer=http://{host}:{port}/login", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=login", "Value=master", ENDITEM, 
		"Name=password", "Value=123", ENDITEM, 
		"Name=rememberMe", "Value=false", ENDITEM, 
		LAST);

	web_add_cookie("currentCompany=0; DOMAIN={host}");

	web_add_cookie("currentUser=master; DOMAIN={host}");

	web_add_cookie("PFLB.pre.login.link=null; DOMAIN={host}");

	web_add_cookie("filterSetting="
		"%7B%22page%22%3A%22http%3A%2F%2F{host}%" 
		"3A{port}%2F%23tickets%3Fstate%3Dopened%26page%3D1%" 
		"22%2C%22smho%22%3Anull%2C%22dateStart%22%3A%22%22%" 
		"2C%22dateEnd%22%3A%22%22%2C%22cat1%22%3Anull%2C%" 
		"22cat2%22%3Anull%2C%22cat3%22%3Anull%2C%22cat4%22%" 
		"3Anull%2C%22theme%22%3Anull%2C%22engineer%22%3Anull%" 
		"2C%22location%22%3Anull%2C%22division%22%3Anull%2C%" 
		"22overdue%22%3Afalse%2C%22filters%22%3A%7B%22new" 
		"Checkbox%22%3Atrue%2C%22appointedCheckbox%22%3Atrue" 
		"%2C%22performedCheckbox%22%3Atrue%2C%22controlCheckbo"
		"x%22%3Atrue%7D%7D; DOMAIN={host}");

	web_url("learning2.pflb.ru:56902_2", 
		"URL=http://{host}:{port}/", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=http://{host}:{port}/login", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/js/core/jqueryformplugin.js?_=1574683492680", ENDITEM, 
		"Url=/engineer/wrapper/wrapper.dust", ENDITEM, 
		"Url=/engineer/wrapper/wrapper.js", ENDITEM, 
		"Url=/css/fonts/material_icons/MaterialIcons-Regular.woff", ENDITEM, 
		"Url=/engineer/tickets/tickets.dust", ENDITEM, 
		"Url=/engineer/tickets/tickets.js", ENDITEM, 
		"Url=/engineer/catalog/catalog.dust", ENDITEM, 
		"Url=/engineer/catalog/catalog.js", ENDITEM, 
		"Url=/images/logo-5ka.png", ENDITEM, 
		"Url=/engineer/addticket.dust", ENDITEM, 
		LAST);

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("checkLogin", 
		"URL=http://{host}:{port}/api/checkLogin", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{host}:{port}/", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	web_url("info", 
		"URL=http://{host}:{port}/api/user/info", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{host}:{port}/", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	web_url("4", 
		"URL=http://{host}:{port}/api/ticket/countByState/4", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{host}:{port}/", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);

	web_url("countByState", 
		"URL=http://{host}:{port}/api/ticket/countByState/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{host}:{port}/", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("ticket", 
		"URL=http://{host}:{port}/api/ticket/?state=-1,0,1,5&page=0&size=10", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{host}:{port}/", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		LAST);

	lr_end_transaction("UC01_TC01_login",LR_AUTO);

	lr_start_transaction("UC01_TC02_click_button_new_incident");

	web_url("children", 
		"URL=http://{host}:{port}/api/user/catalog/node/0/children/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{host}:{port}/", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("UC01_TC02_click_button_new_incident",LR_AUTO);

	lr_think_time(48);
	
	web_reg_save_param("shopID",
	                   "LB=\"id\":",
	                   "RB=,\"",
	                   "Ord=All",
	                   LAST);

	web_url("shops", 
		"URL=http://{host}:{port}/api/shops?q=&page=0", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{host}:{port}/", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		LAST);

	web_url("children_2", 
		"URL=http://{host}:{port}/api/user/catalog/node/0/children/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{host}:{port}/", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_save_string(lr_paramarr_random("shopID"), "shopIDRandom");
		
		web_reg_save_param("parentID",
	                   "LB=\"parentId\":",
	                   "RB=,\"",
	                   "Ord=All",
	                   LAST);

	web_url("treeview", 
		"URL=http://{host}:{port}/api/user/catalog/treeview?shopid={shopIDRandom}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{host}:{port}/", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_save_string(lr_paramarr_random("parentID"), "parentIDRandom");

	web_url("children_3", 
		"URL=http://{host}:{port}/api/user/catalog/node/{parentIDRandom}/children/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{host}:{port}/", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		LAST);
	
	web_reg_save_param("serviceID",
	                   "LB=\"id\":",
	                   "RB=,\"",
	                   "Ord=All",
	                   LAST);

	web_url("service", 
		"URL=http://{host}:{port}/api/user/catalog/node/{parentIDRandom}/service/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{host}:{port}/", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_save_string(lr_paramarr_random("serviceID"), "serviceIDRandom");

	web_url("{parentIDRandom}", 
		"URL=http://{host}:{port}/api/user/catalog/breadcrumbs/{parentIDRandom}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{host}:{port}/", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		LAST);
	
	web_reg_save_param("InventoryNumberID",
	                   "LB=\"id\":",
	                   "RB=,\"",
	                   "Ord=All",
	                   "NotFound=Warning",
	                   LAST);

	web_url("inventoryNumbers", 
		"URL=http://{host}:{port}/api/inventoryNumbers?serviceId={serviceIDRandom}&shopId={shopIDRandom}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{host}:{port}/", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		LAST);
	
	web_reg_save_param("InventoryID",
	                   "LB=\"numberOfElements\":",
	                   "RB=,\"",
	                   LAST);

	web_url("inventoryNumbers_2", 
		"URL=http://{host}:{port}/api/inventoryNumbers?shopId={shopIDRandom}&serviceId={serviceIDRandom}&serviceId={serviceIDRandom}&q=&page=0", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{host}:{port}/", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(56);

	web_submit_data("file", 
		"Action=http://{host}:{port}/api/ticket/file/", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=http://{host}:{port}/", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=files", "Value=123.txt", "File=Yes", ENDITEM, 
		LAST);

	lr_think_time(54);

	lr_start_transaction("UC01_TC03_create_order");
	
	if(strcmp(lr_eval_string("{InventoryID}"), "0") == 0) {
		
	  web_custom_request("ticket_2", 
		"URL=http://{host}:{port}/api/ticket/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{host}:{port}/", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"BodyBinary={\"text\":\"IOS\",\"header\":\"It's me\",\"ticketStateId\":0,\"serviceId\":\"{serviceIDRandom}\",\"shopId\":\"{shopIDRandom}\"}", 
		LAST);
	   }
	   else {
	   	
		 lr_save_string(lr_paramarr_random("InventoryNumberID"), "InventoryNumberRez");
	  
	web_custom_request("ticket_2", 
		"URL=http://{host}:{port}/api/ticket/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{host}:{port}/", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"BodyBinary={\"text\":\"IOS\",\"header\":\"It's me\",\"ticketStateId\":0,\"serviceId\":\"{serviceIDRandom}\",\"files\":[4391],\"inventoryNumberId\":\"{InventoryNumberRez}\",\"shopId\":\"{shopIDRandom}\"}", 
		LAST);
	   };
	   
	web_revert_auto_header("X-Requested-With");

	lr_think_time(9);

	web_url("learning2.pflb.ru:56902_3", 
		"URL=http://{host}:{port}/", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=http://{host}:{port}/", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/js/core/jqueryformplugin.js?_=1574683784905", ENDITEM, 
		"Url=/engineer/wrapper/wrapper.dust", ENDITEM, 
		"Url=/engineer/wrapper/wrapper.js", ENDITEM, 
		"Url=/engineer/tickets/tickets.dust", ENDITEM, 
		"Url=/engineer/tickets/tickets.js", ENDITEM, 
		LAST);

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("checkLogin_2", 
		"URL=http://{host}:{port}/api/checkLogin", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{host}:{port}/", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		LAST);

	web_url("info_2", 
		"URL=http://{host}:{port}/api/user/info", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{host}:{port}/", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		LAST);

	web_url("4_2", 
		"URL=http://{host}:{port}/api/ticket/countByState/4", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{host}:{port}/", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		LAST);

	web_url("countByState_2", 
		"URL=http://{host}:{port}/api/ticket/countByState/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{host}:{port}/", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		LAST);

	web_url("countByState_3", 
		"URL=http://{host}:{port}/api/ticket/countByState/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{host}:{port}/", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("ticket_3", 
		"URL=http://{host}:{port}/api/ticket/?state=-1,0,1,5&page=0&size=10", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{host}:{port}/", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		LAST);

	web_custom_request("ticket_4", 
		"URL=http://{host}:{port}/api/ticket/?state=-1,0,1,5&page=0&size=10", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{host}:{port}/", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		LAST);

	lr_end_transaction("UC01_TC03_create_order",LR_AUTO);

	lr_think_time(66);

	lr_start_transaction("UC01_TC04_logout");

	web_url("logout", 
		"URL=http://{host}:{port}/api/logout", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=http://{host}:{port}/", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("X-Requested-With");

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