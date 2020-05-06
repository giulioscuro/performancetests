Action()
{

	web_url("desc", 
		"URL=http://192.168.1.2:60000/upnp/dev/f0a70851-b4ee-a3eb-ffff-ffff95887b80/desc", 
		"Resource=1", 
		"RecContentType=application/xml", 
		"Referer=", 
		"Snapshot=t1.inf", 
		LAST);

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("A-IM", 
		"x-bm,gzip");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_url("seed", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=81", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("_ga=GA1.2.1542978993.1583694916; DOMAIN=www.evernote.com");

	web_add_cookie("_gcl_au=1.1.515362189.1583694917; DOMAIN=www.evernote.com");

	web_add_cookie("_fbp=fb.1.1583694918186.1170823938; DOMAIN=www.evernote.com");

	web_add_cookie("__qca=P0-153837977-1583694918227; DOMAIN=www.evernote.com");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_url("GetUsers.action", 
		"URL=https://www.evernote.com/GetUsers.action", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Origin", 
		"chrome-extension://pioclpoplcdbaefihamjohnefbikjilc");

	web_add_auto_header("X-Evernote-Agent", 
		"Evernote Webclipper/7.12.5 (en); Windows NT/10.0; Chrome/81;");

	web_custom_request("user", 
		"URL=https://www.evernote.com/u/0/edam/user/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-thrift", 
		"Referer=", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		"EncType=application/x-thrift", 
		"BodyBinary=\\x80\\x01\\x00\\x01\\x00\\x00\\x00\\x07getUser\\x00\\x00\\x00\\x00\\x0B\\x00\\x01\\x00\\x00\\x00\\x00\\x00", 
		LAST);

	web_custom_request("user_2", 
		"URL=https://www.evernote.com/u/0/edam/user/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-thrift", 
		"Referer=", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		"EncType=application/x-thrift", 
		"BodyBinary=\\x80\\x01\\x00\\x01\\x00\\x00\\x00\\x0BgetUserUrls\\x00\\x00\\x00\\x01\\x0B\\x00\\x01\\x00\\x00\\x00\\x00\\x00", 
		LAST);

	web_revert_auto_header("Origin");

	web_revert_auto_header("Sec-Fetch-Dest");

	web_revert_auto_header("Sec-Fetch-Mode");

	web_revert_auto_header("Sec-Fetch-Site");

	web_revert_auto_header("X-Evernote-Agent");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("www.giulioscuro.it", 
		"URL=http://www.giulioscuro.it/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=http://giulioscuro.it/wp-content/themes/radiate/js/navigation.js?ver=20120206", "Referer=http://giulioscuro.it/", ENDITEM, 
		"Url=http://giulioscuro.it/wp-content/themes/radiate/js/custom.js?ver=5.4.1", "Referer=http://giulioscuro.it/", ENDITEM, 
		"Url=http://giulioscuro.it/wp-content/themes/radiate/js/skip-link-focus-fix.js?ver=20130115", "Referer=http://giulioscuro.it/", ENDITEM, 
		"Url=http://fonts.gstatic.com/s/merriweather/v21/u-4n0qyriQwlOrhSvowK_l521wRZWMf6.woff2", "Referer=http://fonts.googleapis.com/css?family=Roboto%7CMerriweather%3A400%2C300&ver=5.4.1", ENDITEM, 
		"Url=http://giulioscuro.it/wp-includes/js/wp-embed.min.js?ver=5.4.1", "Referer=http://giulioscuro.it/", ENDITEM, 
		"Url=http://fonts.gstatic.com/s/roboto/v20/KFOmCnqEu92Fr1Mu4mxK.woff2", "Referer=http://fonts.googleapis.com/css?family=Roboto%7CMerriweather%3A400%2C300&ver=5.4.1", ENDITEM, 
		"Url=http://giulioscuro.it/wp-includes/js/wp-emoji-release.min.js?ver=5.4.1", "Referer=http://giulioscuro.it/", ENDITEM, 
		"Url=http://fonts.gstatic.com/s/merriweather/v21/u-440qyriQwlOrhSvowK_l5-fCZM.woff2", "Referer=http://fonts.googleapis.com/css?family=Roboto%7CMerriweather%3A400%2C300&ver=5.4.1", ENDITEM, 
		"Url=http://giulioscuro.it/wp-content/themes/radiate/images/header/header-image-one.jpg", "Referer=http://giulioscuro.it/", ENDITEM, 
		"Url=http://giulioscuro.it/wp-admin/images/w-logo-blue.png", "Referer=http://giulioscuro.it/", ENDITEM, 
		LAST);

	lr_start_transaction("1_transaction");

	lr_end_transaction("1_transaction",LR_AUTO);

	return 0;
}
