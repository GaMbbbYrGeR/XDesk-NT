Action()
{

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_url("www.iana.org", 
		"URL=https://www.iana.org/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/_img/2015.1/fonts/NotoSans-Regular.woff", ENDITEM, 
		"Url=/_img/2015.1/fonts/NotoSans-Italic.woff", ENDITEM, 
		"Url=/_img/2015.1/fonts/NotoSans-Bold.woff", ENDITEM, 
		"Url=/_img/2015.1/iana-logo-homepage.svg", ENDITEM, 
		LAST);

	web_url("Domain Names", 
		"URL=https://www.iana.org/domains", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.iana.org/", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);

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
		EXTRARES, 
		"Url=/_img/2011.1/icons/icon_alert.png", ENDITEM, 
		LAST);

	return 0;
}