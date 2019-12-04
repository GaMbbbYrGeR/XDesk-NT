Action()
{
	
	char * success = "false";
	int bytes, sentBytes, sentBytesPast, ResponseTime;
	char webinfo[500], * webinfostring;

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_url("www.iana.org", 
		"URL=https://www.iana.org/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);
	
	web_reg_save_param("ParamName=ResponseCode",
	                          "LB=HTTP/1.1 ",
	                          "RB= ",
	                          LAST);
	
	if(atoi(lr_eval_string("{ResponseCode}")) >= 200 && atoi(lr_eval_string("{ResponseCode}")) < 400)
		success = "true";
	
	sentBytes = web_get_int_property(HTTP_INFO_TOTAL_REQUEST_STAT);

	web_url("Domain Names", 
		"URL=https://www.iana.org/domains", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.iana.org/", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);
	
	sentBytesPast = web_get_int_property(HTTP_INFO_TOTAL_REQUEST_STAT);
	
	lr_save_timestamp("URLtime", "DIGITS=16", LAST );
	
	ResponseTime = web_get_int_property(HTTP_INFO_DOWNLOAD_TIME);
	
	bytes = web_get_int_property(HTTP_INFO_DOWNLOAD_SIZE);

	web_url("The DNS Root Zone", 
		"URL=https://www.iana.org/domains/root", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.iana.org/domains", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Root zone change requests", 
		"URL=https://www.iana.org/domains/root/manage", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.iana.org/domains/root", 
		"Snapshot=t6.inf", 
		"Mode=HTML",  
		LAST);
	
	sprintf(webinfo, 
	        "Kuzvecov.K,label=%s,responseCode=%d,success=%s "
	        "responseTime=%d,bytes=%d,sentBytes=%d,URL=\"%s\" %s000\n",
	        "Domain Names",
	        lr_eval_string("{ResponseCode}"),
	        success, 
	        ResponseTime, 
	        bytes, 
	        sentBytesPast - sentBytes,
	        "https://www.iana.org/domains",
	        lr_eval_string("{URLtime}"));
	
	lr_output_message(webinfo);

	return 0;
}