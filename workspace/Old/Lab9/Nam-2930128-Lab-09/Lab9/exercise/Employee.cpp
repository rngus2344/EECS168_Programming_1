#include "Employee.h"

int Employee::getPhoneNumber() const {
        return m_phoneNumber;
}

std::string Employee::getName() const {
        return m_name;
}

std::string Employee::getDepartment() const {
        return m_department;
}

double Employee::getSalary() const {
        return m_salary;
}

bool Employee::setPhoneNumber(int phoneNumber)
{
        std::string s_phoneNumber = std::to_string(phoneNumber);
        if(s_phoneNumber.length() != 7) {
                return false;
        } else {
                m_phoneNumber = phoneNumber;
                return true;
        }
}

bool Employee::setName(std::string name) {
        if (name.length() == 0) {
                return false;
        } else {
                m_name = name;
                return true;
        }
}

bool Employee::setDepartment(std::string department)
{
        if(department == "MARKETING" || department == "R&D" || department == "GLOBAL") {
                m_department = department;
                return true;
        } else {
                return false;
        }
}

bool Employee::setSalary(double salary) {
        if(salary < 0) {
                return false;
        } else {
                m_salary = salary;
                return true;
        }
}

bool Employee::isSameDept(const Employee& otherEmployee) {
        if (otherEmployee.getDepartment() == m_department) {
                return true;
        }
        return false;
}
