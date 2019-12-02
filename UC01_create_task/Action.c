Action()
{

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
		"URL=http://{host}:{port}/api/inventoryNumbers?serviceId=" 
		"{serviceIDRandom}&shopId={shopIDRandom}",
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
		"URL=http://{host}:{port}/api/inventoryNumbers?shopId=" 
		"{shopIDRandom}&serviceId={serviceIDRandom}&serviceId=" 
		"{serviceIDRandom}&q=&page=0",
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{host}:{port}/", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		LAST);

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
			"BodyBinary={\"text\":\"IOS\",\"header\":\"It's me\",\"ticketStateId\":0,\"serviceId\":\"" 
			"{serviceIDRandom}\",\"shopId\":\"{shopIDRandom}\"}",
			LAST);
	} else {
	   	
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
			"BodyBinary={\"text\":\"IOS\",\"header\":\"It's me\",\"ticketStateId\":0,\"serviceId\":\"" 
			"{serviceIDRandom}\",\"inventoryNumberId\":\"{InventoryNumberRez}\",\"" 
			"shopId\":\"{shopIDRandom}\"}",
			LAST);
	};

	web_url("/_3", 
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

	return 0;
}