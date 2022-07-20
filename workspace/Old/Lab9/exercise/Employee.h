#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include <iostream>

class Employee {
private:
int m_phoneNumber;   //must be 7-digits
std::string m_name;   //cannot be the empty string
std::string m_department;   //must be a valid department code (see below)
/*
   All department codes are case-sensitive and these are the only valid codes:

   "MARKETING"
   "R&D"
   "GLOBAL"
 */
double m_salary; //cannot be negative
/*
   You may also create some private helper method to do things like...

   count the number of digits in a phone number
 */
public:
int getPhoneNumber() const;
std::string getName() const;
std::string getDepartment() const;
double getSalary() const;

bool setPhoneNumber(int num);
bool setName(std::string name);
bool setDepartment(std::string dept);
bool setSalary(double salary);
bool isSameDept(const Employee& otherEmployee);

};

#endif
