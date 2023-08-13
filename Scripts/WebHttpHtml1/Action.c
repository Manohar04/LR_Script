Action()
{
	
lr_start_transaction("1");
web_reg

web_custom_request(_request("web_custom_request1",
		"URL=http://www.dneonline.com/calculator.asmx",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"Referer=",
		"Mode=HTML",
		"EncType=text/xml",
		"Body=<soapenv:Envelope xmlns:soapenv=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:tem=\"http://tempuri.org/\">\r\n"
		"   <soapenv:Header/>\r\n"
		"   <soapenv:Body>\r\n"
		"      <tem:Add>\r\n"
		"         <tem:intA>3</tem:intA>\r\n"
		"         <tem:intB>3</tem:intB>\r\n"
		"      </tem:Add>\r\n"
		"   </soapenv:Body>\r\n"
		"</soapenv:Envelope>",
		LAST);
		
		lr_end_transaction("1", LR_AUTO);

	
	return 0;
}
