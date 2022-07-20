#include "EmployeeDriver.h"

void EmployeeDriver::obtainEmployee(Employee& emp)
{
        std::cout << "Name: ";
        std::cin >> name;
        emp.setName(name);

        std::cout << "Phone: ";
        std::cin >> phoneNumber;
        emp.setPhoneNumber(phoneNumber);

        std::cout << "Salary: ";
        std::cin >> salary;
        emp.setSalary(salary);

        std::cout << "Department: ";
        std::cin >> department;
        emp.setDepartment(department);
}

void EmployeeDriver::printEmployeeInfo()
{
        std::cout << std::endl << "Employee 1: " << std::endl;
        std::cout << "Name: " << emp1.getName() << std::endl << "Phone: " << emp1.getPhoneNumber() << std::endl;
        std::cout << "Salary: " << emp1.getSalary() << std::endl << "Department: " << emp1.getDepartment() << std::endl << std::endl;

        std::cout << "Employee 2: " << std::endl;
        std::cout << "Name: " << emp2.getName() << std::endl << "Phone: " << emp2.getPhoneNumber() << std::endl;
        std::cout << "Salary: " << emp2.getSalary() << std::endl << "Department: " << emp2.getDepartment() << std::endl << std::endl;

        if (emp1.isSameDept(emp2)) {
                std::cout << emp1.getName() << " and " << emp2.getName() << " works in the same department!" << std::endl;
        } else std::cout << emp1.getName() << " and " << emp2.getName() << " doesn't work in the same department!" << std::endl;

}

void EmployeeDriver::run()
{
        std::cout << "Input the first Employee information: " << std::endl;
        obtainEmployee(emp1);
        std::cout << std::endl << "Input the second Employee information: " << std::endl;
        obtainEmployee(emp2);
        printEmployeeInfo();
}
