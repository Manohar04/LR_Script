//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	truclient_step("1", "Navigate to TC.getParam('URL')", "snapshot=Action_1.inf");
	truclient_step("2", "Click on Username textbox", "snapshot=Action_2.inf");
	truclient_step("3", "Type username in Username textbox", "snapshot=Action_3.inf");
	truclient_step("4", "Click on Password passwordbox", "snapshot=Action_4.inf");
	truclient_step("5", "Type ******** in Password passwordbox", "snapshot=Action_5.inf");
	truclient_step("6", "Click on Login button", "snapshot=Action_6.inf");
	truclient_step("7", "Click on Search Flights Button image", "snapshot=Action_7.inf");
	truclient_step("8", "Select a random option from Departure City listbox", "snapshot=Action_8.inf");
	truclient_step("9", "Select a random option from Arrival City listbox", "snapshot=Action_9.inf");
	truclient_step("10", "Click on Window radio", "snapshot=Action_10.inf");
	truclient_step("11", "Click on 1 textbox", "snapshot=Action_11.inf");
	truclient_step("12", "Type random in 1 textbox", "snapshot=Action_12.inf");
	truclient_step("13", "If ( TC.getParam('RoundTrip') )", "snapshot=Action_13.inf");
	{
		truclient_step("13.1", "Check Roundtrip ticket checkbox", "snapshot=Action_13.1.inf");
	}
	truclient_step("Else");
	{
		truclient_step("13.2", "Uncheck Roundtrip ticket checkbox", "snapshot=Action_13.2.inf");
	}
	truclient_step("14", "Click on Business radio", "snapshot=Action_14.inf");
	truclient_step("15", "Click on findFlights button", "snapshot=Action_15.inf");
	truclient_step("16", "If ( TC.getParam('RoundTrip') )", "snapshot=Action_16.inf");
	{
		truclient_step("16.1", "Click on 232;1060;08/14/2023 radio", "snapshot=Action_16.1.inf");
		truclient_step("16.2", "Click on 322;1060;08/15/2023 radio", "snapshot=Action_16.2.inf");
	}
	truclient_step("Else");
	{
		truclient_step("16.3", "Click on 232;1060;08/14/2023 radio", "snapshot=Action_16.3.inf");
	}
	truclient_step("17", "Click on reserveFlights button", "snapshot=Action_17.inf");
	truclient_step("18", "Click on Credit Card textbox", "snapshot=Action_18.inf");
	truclient_step("19", "Type 11111111111111111111 in Credit Card textbox", "snapshot=Action_19.inf");
	truclient_step("20", "Click on Exp Date textbox", "snapshot=Action_20.inf");
	truclient_step("21", "Type 12/25 in Exp Date textbox", "snapshot=Action_21.inf");
	truclient_step("22", "Click on buyFlights button", "snapshot=Action_22.inf");
	truclient_step("23", "Click on SignOff Button image", "snapshot=Action_23.inf");

	return 0;
}
