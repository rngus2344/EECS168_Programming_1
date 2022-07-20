#include "DriversLicenseRecord.h"

DriversLicenseRecord::DriversLicenseRecord()
{
  m_firstName="John";
  m_lastName="Doe";
  m_age=0;
  m_licenseNumber=0;
}

DriversLicenseRecord::DriversLicenseRecord(std::string firstName, std::string lastName, int age, char voter, int licenseNumber)
{
  m_firstName=firstName;
  m_lastName=lastName;
  m_age=age;
  m_voter=voter;
  m_licenseNumber=licenseNumber;
}

std::string DriversLicenseRecord::getFirstName()
{
  return(m_firstName);
}

std::string DriversLicenseRecord::getLastName()
{
  return(m_lastName);
}

int DriversLicenseRecord::getAge()
{
  return(m_age);
}

char DriversLicenseRecord::getVoter()
{
  return(m_voter);
}

int DriversLicenseRecord::getLicenseNumber()
{
  return(m_licenseNumber);
}

void DriversLicenseRecord::setFirstName(std::string firstName)
{
  m_firstName=firstName;
}

void DriversLicenseRecord::setLastName(std::string lastName)
{
  m_lastName=lastName;
}

void DriversLicenseRecord::setAge(int age)
{
  m_age=age;
}

void DriversLicenseRecord::setVoter(char voter)
{
  m_voter=voter;
}

void DriversLicenseRecord::setLicenseNumber(int licenseNumber)
{
  m_licenseNumber=licenseNumber;
}
