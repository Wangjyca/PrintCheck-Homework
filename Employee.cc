#include "Employee.h"
#include <iostream>
#include <string>
#include <cstring>


 		 //static	string PayStartDate;
		// static	string PayEndDate;

				string Employee::PayStartDate="00-00-1900";
		    string Employee::PayEndDate="00-00-1900";

   void Employee::setdate(){

   char startdate[13], enddate[13];
			cout <<	"Pay period start date:";
			cin.getline(startdate,13);
		//	cin.ignore();

			cout <<	"Pay period ending date:";
			cin.getline(enddate,13);
		//	cin.ignore();

				  PayStartDate=startdate;
		      PayEndDate=enddate;
 }
  