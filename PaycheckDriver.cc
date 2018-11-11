
#include "Employee.h"
#include "HourlyEmployee.h"
#include "SalariedEmployee.h"
#include <iostream>
#include <cstring>
using namespace std;


int main() {
  std::cout << "Hello World!\n";
   Employee::setdate();

 Employee *HourlyCheckprint = new HourlyEmployee("A001","Jason Lee","456 Highet Street, SF CA94133",88.5,16.5);
 Employee *Weeklycheckprint = new SalariedEmployee("A003","Brian Tam","456 Gold Street, SF CA94133",2,1500);


   HourlyCheckprint->printCheck();
   Weeklycheckprint->printCheck();

return 0;
}

/*
 HourlyEmployee HourlyCheckprint("A001","Jason Lee","456 Highet Street, SF CA94133",88.5,16.5);
 HourlyCheckprint.printCheck();
 SalariedEmployee Weeklycheckprint("A003","Brian Tam","456 Gold Street, SF CA94133",2,1500);
 Weeklycheckprint.printCheck();
 */