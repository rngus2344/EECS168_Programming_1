#ifndef EMPLOYEEDRIVER_H
#define EMPLOYEEDRIVER_H

#include "Employee.h"
#include <iostream>

class EmployeeDriver {
private:
Employee emp1;
Employee emp2;
int phoneNumber;
double salary;
std::string name;
std::string department;

void obtainEmployee(Employee& emp);
/*
   Talk with the user to obtain the data needed to create two employees
   It does not validate the values, but rather checks the return value from a call to Employee's methods
 */

void printEmployeeInfo();
/*
   Prints the following information about each of the Employees to the screen:
   Their names, phone numbers, salaries, and departments
   Lastly print whether or not the two Employee work in the same department
   Again, you must use the Employee's methods to discern this, not just check the department strings locally
 */
public:
void run();
};

#endif
