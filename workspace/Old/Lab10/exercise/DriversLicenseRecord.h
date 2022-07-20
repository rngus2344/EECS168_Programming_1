#ifndef DRIVERS_LICENSE_RECORD_H
#define DRIVERS_LICENSE_RECORD_H

#include <string>

class DriversLicenseRecord {
public:
DriversLicenseRecord(std::string ln, std::string fn, int ag, char vo, int lic);

void setlname(std::string l);

void setfname(std::string f);

void setAge(int age);

void setVoter(char voter);

void setLicense(int license);

std::string getlname();

std::string getfname();

int getAge();

char getVoter();

int getLicense();


private:
std::string lname;
std::string fname;
int m_age;
char m_voter;
int m_license;

};

#endif
