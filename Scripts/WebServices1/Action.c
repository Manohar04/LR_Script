Action()
{
lr_start_transaction("test");

		
	web_service_call( "StepName=Add_101",
		"SOAPMethod=Calculator|CalculatorSoap|Add",
		"ResponseParam=response",
		"Service=Calculator",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1691828781.inf",
		BEGIN_ARGUMENTS,
		"intA=2",
		"intB=3",
		END_ARGUMENTS,
		BEGIN_RESULT,
		"AddResult=Param_AddResult",
		END_RESULT,
		LAST);

	lr_xml_get_values("xml={Param_AddResult}", "ValueParam=result", "Query=//AddResult", LAST);

	
	lr_end_transaction("test", LR_AUTO);
	
	
	

	return 0;
}

	