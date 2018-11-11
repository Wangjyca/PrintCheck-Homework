#ifndef SALARIEDEMPLOYEE_H
#define SALARIEDEMPLOYEE_H
#include <iostream>
#include <cstring>
using namespace std;
#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;


class SalariedEmployee : public Employee
{
	private:
		float Week;
		float Salary;

	public:

		SalariedEmployee(){
		}

		SalariedEmployee(string EMnumber, string EMname,string theAddress, float Weeks, float Salaryrate) : Employee(EMnumber,EMname,theAddress) {
			setWorkedWeek(Weeks);
			setWeeklyWage(Salaryrate);
		};

		~SalariedEmployee(){
		}
		
		void setWorkedWeek(float Weeks){Week=Weeks;}
		void setWeeklyWage(float Salaryrate){Salary=Salaryrate;}

		float getWorkedWeek() const {	return Week;}
		float getWeeklyWage() const {	return Salary;}

    float calcPay(){ return getWorkedWeek()*getWeeklyWage();}


		void printCheck() {

    cout<< endl <<"--------------------------------------------------------------------------------"<< endl;
    cout << setw(80) << right << ("Pay Date: " +getPayEndDate()) << endl << endl<< endl;
  	cout <<  "Pay to: "<< setw(30) << left << getEmployeeName()   <<setw(20) << right<< "$ "<<
		 setprecision(2) << fixed <<  calcPay() << endl<< endl <<endl ;
    cout<< endl <<"--------------------------------------------------------------------------------"<< endl;
		cout << endl << "Payroll period: " << getPayStartDate() <<  " to " << getPayEndDate() << endl;
 
		cout << "Salary: $" << setprecision(2) << fixed << getWeeklyWage() <<  endl;
		cout << "Total Week(s): " << setprecision(2) << fixed <<getWorkedWeek() << endl<< endl;
	cout<< endl <<"--------********--------------***********----------------************-----------"<< endl;

		}
} ;

#endif