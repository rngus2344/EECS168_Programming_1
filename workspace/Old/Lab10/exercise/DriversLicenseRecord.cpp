#include "DriversLicenseRecord.h"

DriversLicenseRecord::DriversLicenseRecord(std::string ln, std::string fn, int ag, char vo, int lic) {
        lname = ln;
        fname = fn;
        m_age = ag;
        m_voter = vo;
        m_license = lic;
}

void DriversLicenseRecord::setlname(std::string l) {
        lname = l;
}

void DriversLicenseRecord::setfname(std::string f) {
        fname = f;
}

void DriversLicenseRecord::setAge(int age) {
        m_age = age;
}

void DriversLicenseRecord::setVoter(char voter) {
        m_voter = voter;
}

void DriversLicenseRecord::setLicense(int license) {
        m_license = license;
}

std::string DriversLicenseRecord::getlname(){
        return lname;
}

std::string DriversLicenseRecord::getfname() {
        return fname;
}

int DriversLicenseRecord::getAge() {
        return m_age;
}

char DriversLicenseRecord::getVoter() {
        return m_voter;
}

int DriversLicenseRecord::getLicense() {
        return m_license;
}
