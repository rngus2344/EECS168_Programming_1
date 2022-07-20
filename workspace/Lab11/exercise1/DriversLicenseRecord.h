#ifndef DRIVERSLICENSERECORD_H
#define DRIVERSLICENSERECORD_H
#include <string>

class DriversLicenseRecord
{
private:
  std::string m_firstName;
  std::string m_lastName;
  int m_age;
  char m_voter;
  int m_licenseNumber;

public:
  DriversLicenseRecord();
  DriversLicenseRecord(std::string firstName, std::string lastName, int age, char voter, int licenseNumber);
  std::string getFirstName();
  std::string getLastName();
  int getAge();
  char getVoter();
  int getLicenseNumber();
  void setFirstName(std::string firstName);
  void setLastName(std::string lastName);
  void setAge(int age);
  void setVoter(char voter);
  void setLicenseNumber(int licenseNumber);
};
#endif
