Action()
{

	web_add_auto_header("UA-CPU", 
		"AMD64");

	web_url("favicon.ico", 
		"URL=http://www.yandex.com/favicon.ico", 
		"Resource=1", 
		"RecContentType=image/x-icon", 
		"Referer=", 
		"Snapshot=t1.inf", 
		LAST);

	web_url("favicon.ico_2", 
		"URL=http://www.yandex.com/favicon.ico", 
		"Resource=1", 
		"RecContentType=image/x-icon", 
		"Referer=", 
		"Snapshot=t2.inf", 
		LAST);

	web_revert_auto_header("UA-CPU");

	web_url("login", 
		"URL=http://learning2.pflb.ru:56902/login", 
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

	web_add_cookie("display-culture=ru-RU; DOMAIN=www.microsoft.com");

	web_add_cookie("MC1=GUID=4f79a563cafe4b0b97078081f92eb2d3&HASH=4f79&LV=201908&V=4&LU=1565083987726; DOMAIN=www.microsoft.com");

	web_add_cookie("display-culture=ru-RU; DOMAIN=web.vortex.data.microsoft.com");

	web_add_cookie("MC1=GUID=4f79a563cafe4b0b97078081f92eb2d3&HASH=4f79&LV=201908&V=4&LU=1565083987726; DOMAIN=web.vortex.data.microsoft.com");

	web_add_cookie("MUID=0C6A4DCF70466A3E014B406574466EE3; DOMAIN=storage.live.com");

	web_url("fwlink", 
		"URL=https://go.microsoft.com/fwlink/?LinkId=517287", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://c.s-microsoft.com/static/fonts/segoe-ui/cyrillic/normal/latest.eot?", "Referer=https://www.microsoft.com/ru-ru/welcomeie11/", ENDITEM, 
		"Url=https://www.microsoft.com/mwf/_h/v3.54/mwf.app/fonts/mwfmdl2-v3.54.woff", "Referer=https://www.microsoft.com/ru-ru/welcomeie11/", ENDITEM, 
		"Url=https://www.microsoft.com/favicon.ico", "Referer=", ENDITEM, 
		"Url=https://c.s-microsoft.com/static/fonts/segoe-ui/cyrillic/light/latest.eot?", "Referer=https://www.microsoft.com/ru-ru/welcomeie11/", ENDITEM, 
		"Url=https://c.s-microsoft.com/ru-ru/CMSImages/ms-icons-v2.jpg?version=86273b5d-da96-139b-36a4-e9f04b7a485d", "Referer=https://www.microsoft.com/ru-ru/welcomeie11/", ENDITEM, 
		"Url=https://mem.gfx.ms/scripts/me/MeControl/10.19284.2/ru-RU/meBoot.min.js", "Referer=https://www.microsoft.com/ru-ru/welcomeie11/", ENDITEM, 
		"Url=https://mem.gfx.ms/scripts/me/MeControl/10.19284.2/ru-RU/meCore.min.js", "Referer=https://www.microsoft.com/ru-ru/welcomeie11/", ENDITEM, 
		"Url=https://web.vortex.data.microsoft.com/collect/v1/t.gif?ver=%272.1%27&name=%27Ms.Webi.MeControl.TrackedScenario%27&time=%272019-11-30T17%3A18%3A12.633Z%27&appId=%27JS%3AMeControl%27&cV=%279dgU8adZwOaHBR%2Bs.7%27&ext-javascript-ver=%271.1%27&ext-javascript-libVer=%274.2.3%27&ext-javascript-domain=%27www.microsoft.com%27&ext-javascript-userConsent=false&ext-app-env=%27Prod%27&*partner=%27mswelcomeie11%27&*controlVersion=%2710.19284.2%27&*market=%27ru-RU%27&*scenario=%27Load%27&*action=%27END%27&"
		"*previousAction=%27START%27&*success=true&*durationMs=366.60000000000036&*details=%27loadV1%27", "Referer=https://www.microsoft.com/ru-ru/welcomeie11/", ENDITEM, 
		"Url=https://web.vortex.data.microsoft.com/collect/v1/t.gif?ver=%272.1%27&name=%27Ms.Webi.OutgoingRequest%27&time=%272019-11-30T17%3A18%3A12.265Z%27&appId=%27JS%3AMeControl%27&cV=%279dgU8adZwOaHBR%2Bs.1%27&ext-javascript-ver=%271.1%27&ext-javascript-libVer=%274.2.3%27&ext-javascript-domain=%27www.microsoft.com%27&ext-javascript-userConsent=false&ext-app-env=%27Prod%27&-operationName=%27meversion%27&-dependencyOperationName=%27LoadResource%27&-dependencyName=%27MeControl%27&-latencyMs=670&-succeeded"
		"=true&-targetUri=%27https%3A%2F%2Fmem.gfx.ms%2Fmeversion%3Fpartner%3D**%26market%3D**%26uhf%3D**%27&*baseType=%27Ms.Qos.OutgoingServiceRequest%27&*pageName=%27None%27&*impressionGuid=%275dae401e-ab2b-4956-3795-52ec8a393764%27&*market=%27ru-RU%27&*customData="
		"%27%7B%22computedDuration%22%3A7670.4%2C%22perfDuration%22%3A670.3%2C%22metaTags%22%3A%7B%22pgpart%22%3A%22mswelcomeie11%22%7D%2C%22config%22%3A%7B%22ver%22%3A%2210.19284.2%22%2C%22mkt%22%3A%22ru-RU%22%2C%22ptn%22%3A%22mswelcomeie11%22%2C%22gfx%22%3A%22https%3A%2F%2Fmem.gfx.ms%2Fscripts%2Fme%22%2C%22dbg%22%3Afalse%2C%22aad%22%3Atrue%2C%22int%22%3Afalse%2C%22pxy%22%3Afalse%2C%22msTxt%22%3Afalse%2C%22rwd%22%3Atrue%2C%22telEvs%22%3A%22PageAction%2C%20PageView%2C%20ContentUpdate%2C%20OutgoingRequest%2"
		"C%20ClientError%2C%20PartnerApiCall%2C%20TrackedScenario%22%2C%22remAcc%22%3Atrue%2C%22main%22%3A%22meBoot%22%2C%22wreply%22%3Anull%2C%22wrapperId%22%3Anull%2C%22cdnRegex%22%3A%22%5E(%3F%3Ahttps%3F%3A%5C%5C%2F%5C%5C%2F)%3F(mem%5C%5C.gfx%5C%5C.ms(%3F!%5C%5C.)%7Ccontrols%5C%5C.account.microsoft%3F(%3F%3A-int%7C-dev)%3F(%5C%5C.com)%3F(%3A%5B0-9%5D%7B1%2C6%7D)%7Camcdn%5C%5C.ms(%3F%3Aft)%3Fauth%5C%5C.net(%3F!%5C%5C.))"
		"%22%7D%2C%22url%22%3A%22https%3A%2F%2Fwww.microsoft.com%2Fru-ru%2Fwelcomeie11%2F%22%2C%22accts%22%3A%220-0%22%7D%27", "Referer=https://www.microsoft.com/ru-ru/welcomeie11/", ENDITEM, 
		"Url=https://web.vortex.data.microsoft.com/collect/v1/t.gif?ver=%272.1%27&name=%27Ms.Webi.MeControl.TrackedScenario%27&time=%272019-11-30T17%3A18%3A12.604Z%27&appId=%27JS%3AMeControl%27&cV=%279dgU8adZwOaHBR%2Bs.6%27&ext-javascript-ver=%271.1%27&ext-javascript-libVer=%274.2.3%27&ext-javascript-domain=%27www.microsoft.com%27&ext-javascript-userConsent=false&ext-app-env=%27Prod%27&*partner=%27mswelcomeie11%27&*controlVersion=%2710.19284.2%27&*market=%27ru-RU%27&*scenario=%27Interactive%27&*action="
		"%27END%27&*previousAction=%27START%27&*success=true&*durationMs=337&*details=%27Web%20header%27", "Referer=https://www.microsoft.com/ru-ru/welcomeie11/", ENDITEM, 
		"Url=https://web.vortex.data.microsoft.com/collect/v1/t.gif?ver=%272.1%27&name=%27Ms.Webi.OutgoingRequest%27&time=%272019-11-30T17%3A18%3A12.527Z%27&appId=%27JS%3AMeControl%27&cV=%279dgU8adZwOaHBR%2Bs.4%27&ext-javascript-ver=%271.1%27&ext-javascript-libVer=%274.2.3%27&ext-javascript-domain=%27www.microsoft.com%27&ext-javascript-userConsent=false&ext-app-env=%27Prod%27&-operationName=%27meBoot.min.js%27&-dependencyOperationName=%27DownloadScript%27&-dependencyName=%27MeControl%27&-latencyMs=248&"
		"-succeeded=true&-targetUri=%27https%3A%2F%2Fmem.gfx.ms%2Fscripts%2Fme%2FMeControl%2F10.19284.2%2Fru-RU%2FmeBoot.min.js%27&*baseType=%27Ms.Qos.OutgoingServiceRequest%27&*pageName=%27None%27&*impressionGuid=%275dae401e-ab2b-4956-3795-52ec8a393764%27&*market=%27ru-RU%27&*customData="
		"%27%7B%22computedDuration%22%3A254.20000000000073%2C%22perfDuration%22%3A247.59999999999945%2C%22metaTags%22%3A%7B%22pgpart%22%3A%22mswelcomeie11%22%7D%2C%22config%22%3A%7B%22ver%22%3A%2210.19284.2%22%2C%22mkt%22%3A%22ru-RU%22%2C%22ptn%22%3A%22mswelcomeie11%22%2C%22gfx%22%3A%22https%3A%2F%2Fmem.gfx.ms%2Fscripts%2Fme%22%2C%22dbg%22%3Afalse%2C%22aad%22%3Atrue%2C%22int%22%3Afalse%2C%22pxy%22%3Afalse%2C%22msTxt%22%3Afalse%2C%22rwd%22%3Atrue%2C%22telEvs%22%3A%22PageAction%2C%20PageView%2C%20ContentUpda"
		"te%2C%20OutgoingRequest%2C%20ClientError%2C%20PartnerApiCall%2C%20TrackedScenario%22%2C%22remAcc%22%3Atrue%2C%22main%22%3A%22meBoot%22%2C%22wreply%22%3Anull%2C%22wrapperId%22%3Anull%2C%22cdnRegex%22%3A%22%5E(%3F%3Ahttps%3F%3A%5C%5C%2F%5C%5C%2F)%3F(mem%5C%5C.gfx%5C%5C.ms(%3F!%5C%5C.)%7Ccontrols%5C%5C.account.microsoft%3F(%3F%3A-int%7C-dev)%3F(%5C%5C.com)%3F(%3A%5B0-9%5D%7B1%2C6%7D)%7Camcdn%5C%5C.ms(%3F%3Aft)%3Fauth%5C%5C.net(%3F!%5C%5C.))"
		"%22%7D%2C%22url%22%3A%22https%3A%2F%2Fwww.microsoft.com%2Fru-ru%2Fwelcomeie11%2F%22%2C%22accts%22%3A%220-0%22%7D%27", "Referer=https://www.microsoft.com/ru-ru/welcomeie11/", ENDITEM, 
		"Url=https://storage.live.com/Users/0xdb1464e5f9178ac3/MyProfile/ExpressionProfile/ProfilePhoto:Win8Static,UserTileMedium,UserTileStatic/MeControlXXLUserTile?ck=1&ex=24", "Referer=https://www.microsoft.com/ru-ru/welcomeie11/", ENDITEM, 
		LAST);

	web_url("cartcount", 
		"URL=https://www.microsoft.com/store/buy/cartcount", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.microsoft.com/ru-ru/welcomeie11/", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("MUID=0C6A4DCF70466A3E014B406574466EE3; DOMAIN=login.live.com");

	web_add_cookie("ANON=A=E93FBFA289F45112D0541693FFFFFFFF&E=16ee&W=1; DOMAIN=login.live.com");

	web_add_cookie("WLOpt=credtype=1&act=[1]; DOMAIN=login.live.com");

	web_add_cookie("MSPCID=db1464e5f9178ac3; DOMAIN=login.live.com");

	web_add_cookie("MSPPre=kirill.kuzvietsov@mail.ru|db1464e5f9178ac3||; DOMAIN=login.live.com");

	web_add_cookie("CAW=%3CEncryptedData%20xmlns%3D%22http://www.w3.org/2001/04/xmlenc%23%22%20Id%3D%22BinaryDAToken1%22%20Type%3D%22http://www.w3.org/2001/04/xmlenc%23Element%22%3E%3CEncryptionMethod%20Algorithm%3D%22http://www.w3.org/2001/04/xmlenc%23tripledes-cbc%22%3E%3C/EncryptionMethod%3E%3Cds:KeyInfo%20xmlns:ds%3D%22http://www.w3.org/2000/09/xmldsig%23%22%3E%3Cds:KeyName%3Ehttp://Passport.NET/STS%3C/ds:KeyName%3E%3C/ds:KeyInfo%3E%3CCipherData%3E%3CCipherValue%3ECZZnn8vAT5PO6yrLMC/"
		"Gt3uRoFisKPT7axlewtYAa1asTeNp2t9QBFgohjzfoXp58hja0r8AZrzNOKjTMRAW5HRDxJdscEhKsM/NK%2BqP4cPxdDlu%2BioaYopRNgF4I4px7FJEtOkgfn80mg1fSHQU%2Br0AnUaNP0tJkFZL8tlvmp%2BxTl3%2B4kacWD2aTpEmgARGJ6y9yZ0H4uSMsYX1Fl/Zzpe%2BgxQ1RBq1H3xyoTSE45kiU/"
		"NuaJXc4Ci4BcsHi25OHzlt3sPV3hiHmM98UmZLoM4IQgAZhCRD5bRaKGKAIrz9Thv5jhZ8t8fnbyhDuvVPfCLdHK4w4AYtTKaO9tYqwHHSbXbq9kOnIdIXU1usI5pnpo0qd6l6mk1egUkBraXSktFJ1AEc6qvYGU9JKieruc2kwtBqEx0X7a20FprWM2eOwryMMc238ykGKckBgLqyjJVxIWxaL%2B5lj9fWABCDgrmPYXuexz2v0FdnRx7uBkc7d%2Bw7ID6GULqbaprRx0hq8ULyD5mc41BY/PqmaoFk7lkr5u4jxqSxkPhKR/RG5wbYKF0tw/MjB/dQ0HqYveIecWNpPxldaPWjz/Cj7t0QAJPth85uUOLf0wxkIFlqAEY95c9PHx7ctYHOeap8cPfP3WHZbj3dovilhN0%2BRq7ZSceX/f/YR0ibcQNojs2MmgWJu1GFhOGvmqUFYvcatfidCRHudmMITu8m/6/Ap93K7ag%3D%3C/"
		"CipherValue%3E%3C/CipherData%3E%3C/EncryptedData%3E; DOMAIN=login.live.com");

	web_add_cookie("DIDC=ct%3D1575134293%26hashalg%3DSHA256%26bver%3D22%26appid%3DDefault%26da%3D%253CEncryptedData%2520xmlns%253D%2522http://www.w3.org/2001/04/xmlenc%2523%2522%2520Id%253D%2522devicesoftware%2522%2520Type%253D%2522http://www.w3.org/2001/04/xmlenc%2523Element%2522%253E%253CEncryptionMethod%2520Algorithm%253D%2522http://www.w3.org/2001/04/xmlenc%2523tripledes-cbc%2522%253E%253C/EncryptionMethod%253E%253Cds:KeyInfo%2520xmlns:ds%253D%2522http://www.w3.org/2000/09/"
		"xmldsig%2523%2522%253E%253Cds:KeyName%253Ehttp://Passport.NET/STS%253C/ds:KeyName%253E%253C/ds:KeyInfo%253E%253CCipherData%253E%253CCipherValue%253ECeM4bSCAggN%252BRJ46COFbxwcxI%252B6hfwJE4C52a1U%252BCOLMuTWGylla6KLoLNNoN0mlWO5XB2h3WfwQEs7xKdLjYyyp5udnQFbxUX2soJuB%252BgKQ4IifsM1zs5wqbluBtmYqQtm3YwfHU7MY4xVHU0WH7jnyh0GFDLYXUlwv0gancfSXlGpHB4J1R2N4c22C7qa8VxuaZzmmlx1gJmGCynfJrCQtFI8ugMLhvx7KhG5hYUT6cpfE7Mpxt5lmjtuSnNJG7DFYOUFgtccV2VQM8zTbYlcbFTqxKrU8m/"
		"eAdt9fIUvEbmV4AEHgRFyZbuqZqB8FNYZnvUD8nag7APeaXn7hUZale8HFHtWTzloY/NKUsVaznTf897Mf0XRf2FlhWBrNc6yVEOkC/ohzwXDzSAcMTjMcWzkSaOq9Fw5uIZ8SlBBWw%252B/BFZXzmI2wRH5eSRYtpDn96K6qRwcvvEdbRILfu%252B94Qgyoh6TuM101P8UvRsggoZ9g5uGUw/iq7QBVcTxPe5/M1Num67/awr43C0/bdtHnTLwCmjsTLzQDBXlRdSORekZbPZvaP0TwZrlG7WgYhXHxQk7KT8il1HOQ2eSvluxgGINC45/D1t7ZqtN4fe6Bho75nhEQFyP5o0rQ0p4eenN8tnD7gnnZjB4qrONiAiVTCARqQNexYLLC9f757IzIhnpr6zdbTlDQprndoTPnGRVJY8UeVRm2F2CJ6JdkTDOL8MZMrLZImFH2lRUw6O6%252BETCq6CcxXii0N73/"
		"Es9p2sZW3eNUjxD7zx60%252BP6n9SrYvd8uusaq/PoQrTz5SAyh%253C/CipherValue%253E%253C/CipherData%253E%253C/EncryptedData%253E%26nonce%3DU2P1aI8b6GF02%252FnZINqlsyjjoDy1Cpyy%26hash%3DOt26KQYqs2EF5pcawGlpc2Tt28HUeikZZGCmBbDApuE%253D%26dd%3D1; DOMAIN=login.live.com");

	web_add_cookie("DIDCL=ct%3D1575134293%26hashalg%3DSHA256%26bver%3D22%26appid%3DDefault%26da%3D%253CEncryptedData%2520xmlns%253D%2522http://www.w3.org/2001/04/xmlenc%2523%2522%2520Id%253D%2522devicesoftware%2522%2520Type%253D%2522http://www.w3.org/2001/04/xmlenc%2523Element%2522%253E%253CEncryptionMethod%2520Algorithm%253D%2522http://www.w3.org/2001/04/xmlenc%2523tripledes-cbc%2522%253E%253C/EncryptionMethod%253E%253Cds:KeyInfo%2520xmlns:ds%253D%2522http://www.w3.org/2000/09/"
		"xmldsig%2523%2522%253E%253Cds:KeyName%253Ehttp://Passport.NET/STS%253C/ds:KeyName%253E%253C/ds:KeyInfo%253E%253CCipherData%253E%253CCipherValue%253ECeM4bSCAggN%252BRJ46COFbxwcxI%252B6hfwJE4C52a1U%252BCOLMuTWGylla6KLoLNNoN0mlWO5XB2h3WfwQEs7xKdLjYyyp5udnQFbxUX2soJuB%252BgKQ4IifsM1zs5wqbluBtmYqQtm3YwfHU7MY4xVHU0WH7jnyh0GFDLYXUlwv0gancfSXlGpHB4J1R2N4c22C7qa8VxuaZzmmlx1gJmGCynfJrCQtFI8ugMLhvx7KhG5hYUT6cpfE7Mpxt5lmjtuSnNJG7DFYOUFgtccV2VQM8zTbYlcbFTqxKrU8m/"
		"eAdt9fIUvEbmV4AEHgRFyZbuqZqB8FNYZnvUD8nag7APeaXn7hUZale8HFHtWTzloY/NKUsVaznTf897Mf0XRf2FlhWBrNc6yVEOkC/ohzwXDzSAcMTjMcWzkSaOq9Fw5uIZ8SlBBWw%252B/BFZXzmI2wRH5eSRYtpDn96K6qRwcvvEdbRILfu%252B94Qgyoh6TuM101P8UvRsggoZ9g5uGUw/iq7QBVcTxPe5/M1Num67/awr43C0/bdtHnTLwCmjsTLzQDBXlRdSORekZbPZvaP0TwZrlG7WgYhXHxQk7KT8il1HOQ2eSvluxgGINC45/D1t7ZqtN4fe6Bho75nhEQFyP5o0rQ0p4eenN8tnD7gnnZjB4qrONiAiVTCARqQNexYLLC9f757IzIhnpr6zdbTlDQprndoTPnGRVJY8UeVRm2F2CJ6JdkTDOL8MZMrLZImFH2lRUw6O6%252BETCq6CcxXii0N73/"
		"Es9p2sZW3eNUjxD7zx60%252BP6n9SrYvd8uusaq/PoQrTz5SAyh%253C/CipherValue%253E%253C/CipherData%253E%253C/EncryptedData%253E%26nonce%3DU2P1aI8b6GF02%252FnZINqlsyjjoDy1Cpyy%26hash%3DOt26KQYqs2EF5pcawGlpc2Tt28HUeikZZGCmBbDApuE%253D%26dd%3D1; DOMAIN=login.live.com");

	web_url("silentauth", 
		"URL=https://www.microsoft.com/en-us/silentauth", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.microsoft.com/ru-ru/welcomeie11/", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("DIDC=ct%3D1575134293%26hashalg%3DSHA256%26bver%3D22%26appid%3DDefault%26da%3D%253CEncryptedData%2520xmlns%253D%2522http://www.w3.org/2001/04/xmlenc%2523%2522%2520Id%253D%2522devicesoftware%2522%2520Type%253D%2522http://www.w3.org/2001/04/xmlenc%2523Element%2522%253E%253CEncryptionMethod%2520Algorithm%253D%2522http://www.w3.org/2001/04/xmlenc%2523tripledes-cbc%2522%253E%253C/EncryptionMethod%253E%253Cds:KeyInfo%2520xmlns:ds%253D%2522http://www.w3.org/2000/09/"
		"xmldsig%2523%2522%253E%253Cds:KeyName%253Ehttp://Passport.NET/STS%253C/ds:KeyName%253E%253C/ds:KeyInfo%253E%253CCipherData%253E%253CCipherValue%253ECeM4bSCAggN%252BRJ46COFbxwcxI%252B6hfwJE4C52a1U%252BCOLMuTWGylla6KLoLNNoN0mlWO5XB2h3WfwQEs7xKdLjYyyp5udnQFbxUX2soJuB%252BgKQ4IifsM1zs5wqbluBtmYqQtm3YwfHU7MY4xVHU0WH7jnyh0GFDLYXUlwv0gancfSXlGpHB4J1R2N4c22C7qa8VxuaZzmmlx1gJmGCynfJrCQtFI8ugMLhvx7KhG5hYUT6cpfE7Mpxt5lmjtuSnNJG7DFYOUFgtccV2VQM8zTbYlcbFTqxKrU8m/"
		"eAdt9fIUvEbmV4AEHgRFyZbuqZqB8FNYZnvUD8nag7APeaXn7hUZale8HFHtWTzloY/NKUsVaznTf897Mf0XRf2FlhWBrNc6yVEOkC/ohzwXDzSAcMTjMcWzkSaOq9Fw5uIZ8SlBBWw%252B/BFZXzmI2wRH5eSRYtpDn96K6qRwcvvEdbRILfu%252B94Qgyoh6TuM101P8UvRsggoZ9g5uGUw/iq7QBVcTxPe5/M1Num67/awr43C0/bdtHnTLwCmjsTLzQDBXlRdSORekZbPZvaP0TwZrlG7WgYhXHxQk7KT8il1HOQ2eSvluxgGINC45/D1t7ZqtN4fe6Bho75nhEQFyP5o0rQ0p4eenN8tnD7gnnZjB4qrONiAiVTCARqQNexYLLC9f757IzIhnpr6zdbTlDQprndoTPnGRVJY8UeVRm2F2CJ6JdkTDOL8MZMrLZImFH2lRUw6O6%252BETCq6CcxXii0N73/"
		"Es9p2sZW3eNUjxD7zx60%252BP6n9SrYvd8uusaq/PoQrTz5SAyh%253C/CipherValue%253E%253C/CipherData%253E%253C/EncryptedData%253E%26nonce%3DwycouW5duvBfcaF6AHU98y0eiX37h3jO%26hash%3DEsRxOuzCHaMUshaRJ0Q%252Bs%252F89QsAKU8gyEZ1Oco4qSas%253D%26dd%3D1; DOMAIN=login.live.com");

	web_add_cookie("DIDCL=ct%3D1575134293%26hashalg%3DSHA256%26bver%3D22%26appid%3DDefault%26da%3D%253CEncryptedData%2520xmlns%253D%2522http://www.w3.org/2001/04/xmlenc%2523%2522%2520Id%253D%2522devicesoftware%2522%2520Type%253D%2522http://www.w3.org/2001/04/xmlenc%2523Element%2522%253E%253CEncryptionMethod%2520Algorithm%253D%2522http://www.w3.org/2001/04/xmlenc%2523tripledes-cbc%2522%253E%253C/EncryptionMethod%253E%253Cds:KeyInfo%2520xmlns:ds%253D%2522http://www.w3.org/2000/09/"
		"xmldsig%2523%2522%253E%253Cds:KeyName%253Ehttp://Passport.NET/STS%253C/ds:KeyName%253E%253C/ds:KeyInfo%253E%253CCipherData%253E%253CCipherValue%253ECeM4bSCAggN%252BRJ46COFbxwcxI%252B6hfwJE4C52a1U%252BCOLMuTWGylla6KLoLNNoN0mlWO5XB2h3WfwQEs7xKdLjYyyp5udnQFbxUX2soJuB%252BgKQ4IifsM1zs5wqbluBtmYqQtm3YwfHU7MY4xVHU0WH7jnyh0GFDLYXUlwv0gancfSXlGpHB4J1R2N4c22C7qa8VxuaZzmmlx1gJmGCynfJrCQtFI8ugMLhvx7KhG5hYUT6cpfE7Mpxt5lmjtuSnNJG7DFYOUFgtccV2VQM8zTbYlcbFTqxKrU8m/"
		"eAdt9fIUvEbmV4AEHgRFyZbuqZqB8FNYZnvUD8nag7APeaXn7hUZale8HFHtWTzloY/NKUsVaznTf897Mf0XRf2FlhWBrNc6yVEOkC/ohzwXDzSAcMTjMcWzkSaOq9Fw5uIZ8SlBBWw%252B/BFZXzmI2wRH5eSRYtpDn96K6qRwcvvEdbRILfu%252B94Qgyoh6TuM101P8UvRsggoZ9g5uGUw/iq7QBVcTxPe5/M1Num67/awr43C0/bdtHnTLwCmjsTLzQDBXlRdSORekZbPZvaP0TwZrlG7WgYhXHxQk7KT8il1HOQ2eSvluxgGINC45/D1t7ZqtN4fe6Bho75nhEQFyP5o0rQ0p4eenN8tnD7gnnZjB4qrONiAiVTCARqQNexYLLC9f757IzIhnpr6zdbTlDQprndoTPnGRVJY8UeVRm2F2CJ6JdkTDOL8MZMrLZImFH2lRUw6O6%252BETCq6CcxXii0N73/"
		"Es9p2sZW3eNUjxD7zx60%252BP6n9SrYvd8uusaq/PoQrTz5SAyh%253C/CipherValue%253E%253C/CipherData%253E%253C/EncryptedData%253E%26nonce%3DwycouW5duvBfcaF6AHU98y0eiX37h3jO%26hash%3DEsRxOuzCHaMUshaRJ0Q%252Bs%252F89QsAKU8gyEZ1Oco4qSas%253D%26dd%3D1; DOMAIN=login.live.com");

	web_url("me.srf", 
		"URL=https://login.live.com/me.srf?wa=wsignin1.0&wreply=https%3A%2F%2Fwww.microsoft.com&uaid=149815b3-da91-4a6d-49bb-82178a682bc4&partnerId=mswelcomeie11", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.microsoft.com/ru-ru/welcomeie11/", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	web_submit_data("silentauth_2", 
		"Action=https://www.microsoft.com/en-us/silentauth?silentauth=msa&wa=wsignin1.0", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://login.live.com/login.srf?wa=wsignin1.0&rpsnv=13&checkda=1&ct=1575134293&rver=7.1.6819.0&wp=MBI_SSL&wreply=https%3a%2f%2fwww.microsoft.com%2fen-us%2fsilentauth%3fsilentauth%3dmsa&lc=1033&id=74335&aadredir=1", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=NAPExp", "Value=Tue, 10-Mar-2020 00:18:19 GMT", ENDITEM, 
		"Name=lp", "Value=2XWYwIcBIEVr2xPLhW6!Q0Uon*Q!MkOMwYcjU9xHi4v8mVGGTKJjW42jAdBsfnVnLRqBIdi7Y!cFwWeF45ro0MHMBo5AC8ydXsvbw!Lj9oc4bzR7T7!F!b0lTXGFl1glUnh*Q!nrmIIHJPoKSq77grvu!ZQeoGoMszVG!W!UKuBKqJXfmqokuZhspyGHxOyeAKijCZ0k2S3PQxw7Ll9ATH9g$$", ENDITEM, 
		"Name=pprid", "Value=db1464e5f9178ac3", ENDITEM, 
		"Name=lt", "Value=2XzEKNMJJD3mRswIAx7PZjnS!jyXFYMr7Gb0weiSJV3vsgUOzXOJp0Yyyr7jJ4d0b97BUpcF3IUpunnS9E*iiD5Xo3cOE8CkPnwN!xxzhcsVscHek*v!VxjfpEOIet6k5ig1N4e3vFhyD3AhJaQyHXbw$$", ENDITEM, 
		"Name=NAP", "Value=V%3D1.9%26E%3D170e%26C%3Ddup_y0b9kdi4sbJj645K3SbXfPZ9eVLgno0uufvuj3ABUvxPn3c0tA%26W%3D1", ENDITEM, 
		"Name=ANON", "Value=A%3DE93FBFA289F45112D0541693FFFFFFFF%26E%3D16ee%26W%3D1", ENDITEM, 
		"Name=ANONExp", "Value=Thu, 18-Jun-2020 00:18:19 GMT", ENDITEM, 
		"Name=t", "Value=GABNAgMAAAAEgAAADAAg+Lf8qKgf1YXdUek5+DmpNc4kslCilUJNdiTl/oFHQ0sAASUHcaX/hM7XJEpAYkIPZ3X3L8cC9qXZNh4RZHpo3KJjyxh3YVO9SUb8EBJYvTFFNAMVzzNwIf6zRObVBqT0PBopuUHbviT0RR64ozpjVfHA0pJ6RTCRyNEoNK9b/crFvduCIUfWItOvzDSP3SyYv7uXjTLrNO6nZE7IpaM0ptaC+dmOKmZblorw/amtPxapVnN8xoMditH+xxXNbcZD4ke75+rY4hxUq7YLG2jstlmuEWrlGprsaI8SBp1oHitQYYhRSrlEiio5OmjVTgMLVQ0aLbeDrcoCFppIK+nmlj7jdP4A+ryImpIkazIk5tk2JgZNXeSUrrAgI2+yjqIbVdUaAXsAGgEAAAMA7+"
		"rnCFWk4l1qq0FdXyIBAAoQIAAQGgBraXJpbGwua3V6dmlldHNvdkBtYWlsLnJ1AFwAACZraXJpbGwua3V6dmlldHNvdiVtYWlsLnJ1QHBhc3Nwb3J0LmNvbQAAAAZSVQAAAAAAAAQZAgAAjYVVQBAGQQAHS2lyaWxsLgABSwAAAAAAAAAAAAAAAAAAAAAAAPkXisPbFGTlAABVpOJdZElZXgAAAAAAAAAAAAAAAA4AMTg4LjMyLjE2Mi4zMwAEAQAAAADAGADssOjFBAEAAAAAAAAAAAAAAAAAAAAAj+a3HlxVwgkBgBgA6azdw/6/GABecTFOAAAAAAAAAAAAAAAAAAD/PyMAmofdggAAAAADAA==", ENDITEM, 
		LAST);

	web_add_header("Origin", 
		"https://www.microsoft.com");

	web_custom_request("v1", 
		"URL=https://web.vortex.data.microsoft.com/collect/v1", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.microsoft.com/ru-ru/welcomeie11/", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"ver\":\"2.1\",\"name\":\"Ms.Webi.OutgoingRequest\",\"time\":\"2019-11-30T17:18:12.779Z\",\"appId\":\"JS:MeControl\",\"cV\":\"9dgU8adZwOaHBR+s.8\",\"data\":{\"baseType\":\"Ms.Qos.OutgoingServiceRequest\",\"pageName\":\"Initial Collapsed\",\"impressionGuid\":\"5dae401e-ab2b-4956-3795-52ec8a393764\",\"market\":\"ru-RU\",\"customData\":\"{\\\"computedDuration\\\":117.19999999999982,\\\"perfDuration\\\":112.59999999999945,\\\"metaTags\\\":{\\\"pgpart\\\":\\\"mswelcomeie11\\\"},\\\"config\\\":"
		"{\\\"ver\\\":\\\"10.19284.2\\\",\\\"mkt\\\":\\\"ru-RU\\\",\\\"ptn\\\":\\\"mswelcomeie11\\\",\\\"gfx\\\":\\\"https://mem.gfx.ms/scripts/me\\\",\\\"dbg\\\":false,\\\"aad\\\":true,\\\"int\\\":false,\\\"pxy\\\":false,\\\"msTxt\\\":false,\\\"rwd\\\":true,\\\"telEvs\\\":\\\"PageAction, PageView, ContentUpdate, OutgoingRequest, ClientError, PartnerApiCall, TrackedScenario\\\",\\\"remAcc\\\":true,\\\"main\\\":\\\"meBoot\\\",\\\"wreply\\\":null,\\\"wrapperId\\\":null,\\\"cdnRegex\\\":\\\"^(?:https?:\\\\/"
		"\\\\/)?(mem\\\\.gfx\\\\.ms(?!\\\\.)|controls\\\\.account.microsoft?(?:-int|-dev)?(\\\\.com)?(:[0-9]{1,6})|amcdn\\\\.ms(?:ft)?auth\\\\.net(?!\\\\.))\\\"},\\\"url\\\":\\\"https://www.microsoft.com/ru-ru/welcomeie11/\\\",\\\"accts\\\":\\\"0-0\\\"}\",\"baseData\":{\"operationName\":\"meCore.min.js\",\"dependencyOperationName\":\"DownloadScript\",\"dependencyName\":\"MeControl\",\"latencyMs\":113,\"succeeded\":true,\"targetUri\":\"https://mem.gfx.ms/scripts/me/MeControl/10.19284.2/ru-RU/meCore.min.js\""
		"}},\"ext\":{\"javascript\":{\"ver\":\"1.1\",\"libVer\":\"4.2.3\",\"domain\":\"www.microsoft.com\",\"userConsent\":false},\"app\":{\"env\":\"Prod\"}}}\n{\"ver\":\"2.1\",\"name\":\"Ms.Webi.ContentUpdate\",\"time\":\"2019-11-30T17:18:12.548Z\",\"appId\":\"JS:MeControl\",\"cV\":\"9dgU8adZwOaHBR+s.5\",\"data\":{\"baseType\":\"Ms.Content.ContentUpdate\",\"pageLoadTime\":281,\"cookieEnabled\":true,\"isJs\":true,\"isLoggedIn\":false,\"isManual\":true,\"baseData\":{\"ver\":\"1.0\",\"impressionGuid\":\""
		"5dae401e-ab2b-4956-3795-52ec8a393764\",\"market\":\"ru-RU\",\"pageTags\":\"{\\\"metaTags\\\":{\\\"pgpart\\\":\\\"mswelcomeie11\\\"},\\\"config\\\":{\\\"ver\\\":\\\"10.19284.2\\\",\\\"mkt\\\":\\\"ru-RU\\\",\\\"ptn\\\":\\\"mswelcomeie11\\\",\\\"gfx\\\":\\\"https://mem.gfx.ms/scripts/me\\\",\\\"dbg\\\":false,\\\"aad\\\":true,\\\"int\\\":false,\\\"pxy\\\":false,\\\"msTxt\\\":false,\\\"rwd\\\":true,\\\"telEvs\\\":\\\"PageAction, PageView, ContentUpdate, OutgoingRequest, ClientError, PartnerApiCall, "
		"TrackedScenario\\\",\\\"remAcc\\\":true,\\\"main\\\":\\\"meBoot\\\",\\\"wreply\\\":null,\\\"wrapperId\\\":null,\\\"cdnRegex\\\":\\\"^(?:https?:\\\\/\\\\/)?(mem\\\\.gfx\\\\.ms(?!\\\\.)|controls\\\\.account.microsoft?(?:-int|-dev)?(\\\\.com)?(:[0-9]{1,6})|amcdn\\\\.ms(?:ft)?auth\\\\.net(?!\\\\.))\\\"},\\\"url\\\":\\\"https://www.microsoft.com/ru-ru/welcomeie11/\\\",\\\"accts\\\":\\\"0-0\\\"}\",\"contentVer\":\"2.0\",\"content\":\"[{\\\"id\\\":\\\"Initial Collapsed\\\",\\\"cS\\\":\\\"Application\\\"}"
		"]\"}},\"ext\":{\"javascript\":{\"ver\":\"1.1\",\"libVer\":\"4.2.3\",\"domain\":\"www.microsoft.com\",\"userConsent\":false},\"app\":{\"env\":\"Prod\"}}}\n{\"ver\":\"2.1\",\"name\":\"Ms.Webi.MeControl.PartnerApiCall\",\"time\":\"2019-11-30T17:18:12.267Z\",\"appId\":\"JS:MeControl\",\"cV\":\"9dgU8adZwOaHBR+s.2\",\"data\":{\"partner\":\"mswelcomeie11\",\"controlVersion\":\"10.19284.2\",\"methodName\":\"loadV1\",\"parameters\":\"{\\\"containerId\\\":\\\"*string*\\\",\\\"enabled\\\":\\\"*boolean*\\\","
		"\\\"headerHeight\\\":\\\"*number*\\\",\\\"debug\\\":\\\"*boolean*\\\",\\\"extensibleLinks\\\":{},\\\"userData\\\":{\\\"idp\\\":\\\"aad\\\",\\\"firstName\\\":\\\"*string*\\\",\\\"lastName\\\":\\\"*string*\\\",\\\"memberName\\\":\\\"*string*\\\",\\\"cid\\\":\\\"*string*\\\",\\\"authenticatedState\\\":3},\\\"rpData\\\":{\\\"preferredIdp\\\":\\\"*string*\\\",\\\"msaInfo\\\":{\\\"signInUrl\\\":\\\"*string*\\\",\\\"signOutUrl\\\":\\\"*string*\\\",\\\"meUrl\\\":\\\"*string*\\\"},\\\"aadInfo\\\":{\\\""
		"signOutUrl\\\":\\\"*string*\\\",\\\"appId\\\":\\\"*string*\\\",\\\"siteUrl\\\":\\\"*string*\\\",\\\"blockMsaFed\\\":\\\"*boolean*\\\",\\\"signInUrl\\\":\\\"*string*\\\"}},\\\"events\\\":{\\\"onEventLog\\\":\\\"*function*\\\"}}\"},\"ext\":{\"javascript\":{\"ver\":\"1.1\",\"libVer\":\"4.2.3\",\"domain\":\"www.microsoft.com\",\"userConsent\":false},\"app\":{\"env\":\"Prod\"}}}\n{\"ver\":\"2.1\",\"name\":\"Ms.Webi.MeControl.PartnerApiCall\",\"time\":\"2019-11-30T17:18:12.276Z\",\"appId\":\"JS"
		":MeControl\",\"cV\":\"9dgU8adZwOaHBR+s.3\",\"data\":{\"partner\":\"mswelcomeie11\",\"controlVersion\":\"10.19284.2\",\"methodName\":\"setDisplayMode\",\"parameters\":\"{\\\"0\\\":\\\"*string*\\\"}\"},\"ext\":{\"javascript\":{\"ver\":\"1.1\",\"libVer\":\"4.2.3\",\"domain\":\"www.microsoft.com\",\"userConsent\":false},\"app\":{\"env\":\"Prod\"}}}", 
		LAST);

	web_add_cookie("DIDC=ct%3D1575134300%26hashalg%3DSHA256%26bver%3D22%26appid%3DDefault%26da%3D%253CEncryptedData%2520xmlns%253D%2522http://www.w3.org/2001/04/xmlenc%2523%2522%2520Id%253D%2522devicesoftware%2522%2520Type%253D%2522http://www.w3.org/2001/04/xmlenc%2523Element%2522%253E%253CEncryptionMethod%2520Algorithm%253D%2522http://www.w3.org/2001/04/xmlenc%2523tripledes-cbc%2522%253E%253C/EncryptionMethod%253E%253Cds:KeyInfo%2520xmlns:ds%253D%2522http://www.w3.org/2000/09/"
		"xmldsig%2523%2522%253E%253Cds:KeyName%253Ehttp://Passport.NET/STS%253C/ds:KeyName%253E%253C/ds:KeyInfo%253E%253CCipherData%253E%253CCipherValue%253ECeM4bSCAggN%252BRJ46COFbxwcxI%252B6hfwJE4C52a1U%252BCOLMuTWGylla6KLoLNNoN0mlWO5XB2h3WfwQEs7xKdLjYyyp5udnQFbxUX2soJuB%252BgKQ4IifsM1zs5wqbluBtmYqQtm3YwfHU7MY4xVHU0WH7jnyh0GFDLYXUlwv0gancfSXlGpHB4J1R2N4c22C7qa8VxuaZzmmlx1gJmGCynfJrCQtFI8ugMLhvx7KhG5hYUT6cpfE7Mpxt5lmjtuSnNJG7DFYOUFgtccV2VQM8zTbYlcbFTqxKrU8m/"
		"eAdt9fIUvEbmV4AEHgRFyZbuqZqB8FNYZnvUD8nag7APeaXn7hUZale8HFHtWTzloY/NKUsVaznTf897Mf0XRf2FlhWBrNc6yVEOkC/ohzwXDzSAcMTjMcWzkSaOq9Fw5uIZ8SlBBWw%252B/BFZXzmI2wRH5eSRYtpDn96K6qRwcvvEdbRILfu%252B94Qgyoh6TuM101P8UvRsggoZ9g5uGUw/iq7QBVcTxPe5/M1Num67/awr43C0/bdtHnTLwCmjsTLzQDBXlRdSORekZbPZvaP0TwZrlG7WgYhXHxQk7KT8il1HOQ2eSvluxgGINC45/D1t7ZqtN4fe6Bho75nhEQFyP5o0rQ0p4eenN8tnD7gnnZjB4qrONiAiVTCARqQNexYLLC9f757IzIhnpr6zdbTlDQprndoTPnGRVJY8UeVRm2F2CJ6JdkTDOL8MZMrLZImFH2lRUw6O6%252BETCq6CcxXii0N73/"
		"Es9p2sZW3eNUjxD7zx60%252BP6n9SrYvd8uusaq/PoQrTz5SAyh%253C/CipherValue%253E%253C/CipherData%253E%253C/EncryptedData%253E%26nonce%3D1iqrmRYpQrdmZATSp3NZaN6PFRleVsAF%26hash%3DlxOXygkwZt8IRBPsPPSez6dgIStYNKlXsXVZbXChhOU%253D%26dd%3D1; DOMAIN=login.live.com");

	web_add_cookie("DIDCL=ct%3D1575134300%26hashalg%3DSHA256%26bver%3D22%26appid%3DDefault%26da%3D%253CEncryptedData%2520xmlns%253D%2522http://www.w3.org/2001/04/xmlenc%2523%2522%2520Id%253D%2522devicesoftware%2522%2520Type%253D%2522http://www.w3.org/2001/04/xmlenc%2523Element%2522%253E%253CEncryptionMethod%2520Algorithm%253D%2522http://www.w3.org/2001/04/xmlenc%2523tripledes-cbc%2522%253E%253C/EncryptionMethod%253E%253Cds:KeyInfo%2520xmlns:ds%253D%2522http://www.w3.org/2000/09/"
		"xmldsig%2523%2522%253E%253Cds:KeyName%253Ehttp://Passport.NET/STS%253C/ds:KeyName%253E%253C/ds:KeyInfo%253E%253CCipherData%253E%253CCipherValue%253ECeM4bSCAggN%252BRJ46COFbxwcxI%252B6hfwJE4C52a1U%252BCOLMuTWGylla6KLoLNNoN0mlWO5XB2h3WfwQEs7xKdLjYyyp5udnQFbxUX2soJuB%252BgKQ4IifsM1zs5wqbluBtmYqQtm3YwfHU7MY4xVHU0WH7jnyh0GFDLYXUlwv0gancfSXlGpHB4J1R2N4c22C7qa8VxuaZzmmlx1gJmGCynfJrCQtFI8ugMLhvx7KhG5hYUT6cpfE7Mpxt5lmjtuSnNJG7DFYOUFgtccV2VQM8zTbYlcbFTqxKrU8m/"
		"eAdt9fIUvEbmV4AEHgRFyZbuqZqB8FNYZnvUD8nag7APeaXn7hUZale8HFHtWTzloY/NKUsVaznTf897Mf0XRf2FlhWBrNc6yVEOkC/ohzwXDzSAcMTjMcWzkSaOq9Fw5uIZ8SlBBWw%252B/BFZXzmI2wRH5eSRYtpDn96K6qRwcvvEdbRILfu%252B94Qgyoh6TuM101P8UvRsggoZ9g5uGUw/iq7QBVcTxPe5/M1Num67/awr43C0/bdtHnTLwCmjsTLzQDBXlRdSORekZbPZvaP0TwZrlG7WgYhXHxQk7KT8il1HOQ2eSvluxgGINC45/D1t7ZqtN4fe6Bho75nhEQFyP5o0rQ0p4eenN8tnD7gnnZjB4qrONiAiVTCARqQNexYLLC9f757IzIhnpr6zdbTlDQprndoTPnGRVJY8UeVRm2F2CJ6JdkTDOL8MZMrLZImFH2lRUw6O6%252BETCq6CcxXii0N73/"
		"Es9p2sZW3eNUjxD7zx60%252BP6n9SrYvd8uusaq/PoQrTz5SAyh%253C/CipherValue%253E%253C/CipherData%253E%253C/EncryptedData%253E%26nonce%3D1iqrmRYpQrdmZATSp3NZaN6PFRleVsAF%26hash%3DlxOXygkwZt8IRBPsPPSez6dgIStYNKlXsXVZbXChhOU%253D%26dd%3D1; DOMAIN=login.live.com");

	web_add_cookie("MS0=1ce046f672fe4cd8a5350321c2871688; DOMAIN=ieonline.microsoft.com");

	web_add_cookie("display-culture=ru-RU; DOMAIN=ieonline.microsoft.com");

	web_add_cookie("MC1=GUID=4f79a563cafe4b0b97078081f92eb2d3&HASH=4f79&LV=201908&V=4&LU=1565083987726; DOMAIN=ieonline.microsoft.com");

	web_url("me.srf_2", 
		"URL=https://login.live.com/me.srf?wa=wsignin1.0&wreply=https%3A%2F%2Fwww.microsoft.com&uaid=149815b3-da91-4a6d-49bb-82178a682bc4&partnerId=mswelcomeie11", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.microsoft.com/ru-ru/welcomeie11/", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://logincdn.msauth.net/16.000/MeControl_HmweTxeXMBZQbsdNQXUOiA2.js", "Referer=https://login.live.com/me.srf?wa=wsignin1.0&wreply=https%3A%2F%2Fwww.microsoft.com&uaid=149815b3-da91-4a6d-49bb-82178a682bc4&partnerId=mswelcomeie11", ENDITEM, 
		"Url=https://ieonline.microsoft.com/iedomainsuggestions/ie11/suggestions.ru-RU", "Referer=", ENDITEM, 
		LAST);

	lr_start_transaction("UC04_TC01_login");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("login_2", 
		"Action=http://learning2.pflb.ru:56902/api/login", 
		"Method=POST", 
		"Referer=http://learning2.pflb.ru:56902/login", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=login", "Value=master", ENDITEM, 
		"Name=password", "Value=123", ENDITEM, 
		"Name=rememberMe", "Value=false", ENDITEM, 
		LAST);

	web_add_cookie("currentCompany=0; DOMAIN=learning2.pflb.ru");

	web_add_cookie("currentUser=master; DOMAIN=learning2.pflb.ru");

	web_add_cookie("PFLB.pre.login.link=null; DOMAIN=learning2.pflb.ru");

	web_add_cookie("filterSetting="
		"%7B%22page%22%3A%22http%3A%2F%2Flearning2.pflb.ru%3A56902%2F%23tickets%3Fstate%3Dopened%26page%3D1%22%2C%22smho%22%3Anull%2C%22dateStart%22%3A%22%22%2C%22dateEnd%22%3A%22%22%2C%22cat1%22%3Anull%2C%22cat2%22%3Anull%2C%22cat3%22%3Anull%2C%22cat4%22%3Anull%2C%22theme%22%3Anull%2C%22engineer%22%3Anull%2C%22location%22%3Anull%2C%22division%22%3Anull%2C%22overdue%22%3Afalse%2C%22filters%22%3A%7B%22newCheckbox%22%3Atrue%2C%22appointedCheckbox%22%3Atrue%2C%22performedCheckbox%22%3Atrue%2C%22controlCheckbo"
		"x%22%3Atrue%7D%7D; DOMAIN=learning2.pflb.ru");

	web_add_cookie("filterSetting=%7B%22page%22%3A%22http%3A%2F%2Flearning2.pflb.ru%3A56902%2F%23tasks%3Fstate%3Dopened%26page%3D1%22%2C%22smho%22%3Anull%2C%22dateStart%22%3A%22%22%2C%22dateEnd%22%3A%22%22%2C%22cat1%22%3Anull%2C%22cat2%22%3Anull%2C%22cat3%22%3Anull%2C%22cat4%22%3Anull%2C%22theme%22%3Anull%2C%22engineer%22%3Anull%2C%22location%22%3Anull%2C%22division%22%3Anull%2C%22overdue%22%3Afalse%2C%22filters%22%3A%7B%7D%7D; DOMAIN=learning2.pflb.ru");

	web_url("learning2.pflb.ru:56902", 
		"URL=http://learning2.pflb.ru:56902/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://learning2.pflb.ru:56902/login", 
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
		"URL=http://learning2.pflb.ru:56902/api/checkLogin", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://learning2.pflb.ru:56902/", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		LAST);

	web_url("info", 
		"URL=http://learning2.pflb.ru:56902/api/user/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://learning2.pflb.ru:56902/", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		LAST);

	web_url("4", 
		"URL=http://learning2.pflb.ru:56902/api/ticket/countByState/4", 
		"Resource=0", 
		"Referer=http://learning2.pflb.ru:56902/", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		LAST);

	web_url("countByState", 
		"URL=http://learning2.pflb.ru:56902/api/ticket/countByState/", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://learning2.pflb.ru:56902/", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("ticket", 
		"URL=http://learning2.pflb.ru:56902/api/ticket/?state=-1,0,1,5&page=0&size=10", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://learning2.pflb.ru:56902/", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		LAST);

	lr_end_transaction("UC04_TC01_login",LR_AUTO);

	lr_start_transaction("UC04_TC02_All_Tasks");

	web_url("countByState_2", 
		"URL=http://learning2.pflb.ru:56902/api/task/countByState/", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://learning2.pflb.ru:56902/", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("task", 
		"URL=http://learning2.pflb.ru:56902/api/task/?state=1&page=0&size=10", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://learning2.pflb.ru:56902/", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		LAST);

	lr_end_transaction("UC04_TC02_All_Tasks",LR_AUTO);

	lr_start_transaction("UC04_TC03_Choose_Task");

	web_url("149759", 
		"URL=http://learning2.pflb.ru:56902/api/task/149759", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://learning2.pflb.ru:56902/", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		LAST);

	web_url("checkLogin_2", 
		"URL=http://learning2.pflb.ru:56902/api/checkLogin", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://learning2.pflb.ru:56902/", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		LAST);

	web_url("comment", 
		"URL=http://learning2.pflb.ru:56902/api/ticket/149759/comment/", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://learning2.pflb.ru:56902/", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("UC04_TC03_Choose_Task",LR_AUTO);

	lr_start_transaction("UC04_TC04_In_Incedent");

	web_custom_request("149759_2", 
		"URL=http://learning2.pflb.ru:56902/api/ticket/149759", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://learning2.pflb.ru:56902/", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		LAST);

	web_url("comment_2", 
		"URL=http://learning2.pflb.ru:56902/api/ticket/149759/comment/", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://learning2.pflb.ru:56902/", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("UC04_TC04_In_Incedent",LR_AUTO);

	lr_think_time(24);

	lr_start_transaction("UC04_TC05_Close_Incedent");

	web_custom_request("solve", 
		"URL=http://learning2.pflb.ru:56902/api/ticket/149759/solve/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://learning2.pflb.ru:56902/", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_url("learning2.pflb.ru:56902_2", 
		"URL=http://learning2.pflb.ru:56902/", 
		"Resource=0", 
		"Referer=http://learning2.pflb.ru:56902/", 
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
		"URL=http://learning2.pflb.ru:56902/api/checkLogin", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://learning2.pflb.ru:56902/", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		LAST);

	web_url("info_2", 
		"URL=http://learning2.pflb.ru:56902/api/user/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://learning2.pflb.ru:56902/", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		LAST);

	web_url("4_2", 
		"URL=http://learning2.pflb.ru:56902/api/ticket/countByState/4", 
		"Resource=0", 
		"Referer=http://learning2.pflb.ru:56902/", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		LAST);

	web_url("countByState_3", 
		"URL=http://learning2.pflb.ru:56902/api/ticket/countByState/", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://learning2.pflb.ru:56902/", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		LAST);

	web_url("countByState_4", 
		"URL=http://learning2.pflb.ru:56902/api/task/countByState/", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://learning2.pflb.ru:56902/", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/api/report/149759?timeZoneOffset=3", "Referer=", ENDITEM, 
		LAST);

	web_custom_request("task_2", 
		"URL=http://learning2.pflb.ru:56902/api/task/?state=1&page=0&size=10", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://learning2.pflb.ru:56902/", 
		"Snapshot=t32.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		LAST);

	web_custom_request("ticket_2", 
		"URL=http://learning2.pflb.ru:56902/api/ticket/?state=-1,0,1,5&page=0&size=10", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://learning2.pflb.ru:56902/", 
		"Snapshot=t33.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		LAST);

	lr_end_transaction("UC04_TC05_Close_Incedent",LR_AUTO);

	lr_think_time(26);

	lr_start_transaction("UC04_TC06_logout");

	web_url("logout", 
		"URL=http://learning2.pflb.ru:56902/api/logout", 
		"Resource=0", 
		"Referer=http://learning2.pflb.ru:56902/", 
		"Snapshot=t34.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("sessionExpired=false; DOMAIN=learning2.pflb.ru");

	web_revert_auto_header("X-Requested-With");

	web_url("login_3", 
		"URL=http://learning2.pflb.ru:56902/login", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://learning2.pflb.ru:56902/", 
		"Snapshot=t35.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("UC04_TC06_logout",LR_AUTO);

	return 0;
}