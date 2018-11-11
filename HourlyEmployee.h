#ifndef HOURLYEMPLOYEE_H 
#define HOURLYEMPLOYEE_H 
#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

class HourlyEmployee : public Employee
{
	private:
		float Hours;
		float Wage;

	public:

		HourlyEmployee(){
		}

		HourlyEmployee(string EMnumber, string EMname,string theAddress, float H, float W) : Employee(EMnumber,EMname,theAddress) {
			setHour(H);
			setWagerate(W);
		};

		~HourlyEmployee(){
		}
		
		void setHour(float H){Hours=H;}
		void setWagerate(float W){Wage=W;}

		float getHoursWorked() const {	return Hours;}
		float getHoursWage() const {	return Wage;}

    float calcPay(){ return getHoursWorked()*getHoursWage();}


		void printCheck() {

    cout<< endl <<"--------------------------------------------------------------------------------"<< endl;
    cout << setw(80) << right << ("Pay Date: " +getPayEndDate()) << endl << endl<< endl;
  	cout <<  "Pay to: "<< setw(30) << left << getEmployeeName()   <<setw(20) << right<< "$ "<<
		setprecision(2) << fixed <<  calcPay() << endl<< endl <<endl ;
    cout<< endl <<"--------------------------------------------------------------------------------"<< endl;
		cout << endl << "Payroll period: " << getPayStartDate() <<  " to " << getPayEndDate() << endl;
 
		cout << "Wage: $" << setprecision(2) << fixed <<getHoursWage() <<  endl;
		cout << "Total hour(s): " << setprecision(2) << fixed <<getHoursWorked() << endl<< endl;
				cout<< endl <<"--------********--------------***********----------------************-----------"<< endl;
		    

		}
} ;



#endif