#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <string>
#include <cstring>
 

using namespace std;

class Employee {

private:
		string EmployeeNUmber;
		string Name;
		string Address;
 
		 static	string PayStartDate;
		 static	string PayEndDate;
		

public:

		Employee(){
		 
		}

		Employee(string EMnumber, string EMname,string theAddress){
				 setEmployeeNumber(EMnumber);
         setEmployeeName(EMname);
         setEmployeeAddress(theAddress);
 
		}


		~	Employee(){
     
		}

	void setEmployeeNumber(string EMnumber){ EmployeeNUmber=EMnumber;}

	void setEmployeeName(string EMname){Name=EMname;}

	void setEmployeeAddress(string theAddress){ Address=theAddress;}
	
	string getEmployeeNumber() const {	return EmployeeNUmber;}

	string getEmployeeName() const {	return Name;}

	string getPayEndDate() const {	return PayEndDate;}

	string getPayStartDate() const {	return PayStartDate;}

	string getEmployeeAddress() const {	return Address;}

	 static void setdate(); // Static member function


	virtual float calcpay(){return 0;} //
  virtual void printCheck(){}; //  virtual


};

#endif