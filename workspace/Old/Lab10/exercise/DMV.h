#ifndef DMV_H
#define DMV_H

#include "DriversLicenseRecord.h"

#include <fstream>
#include <iostream>
#include <string>

class DMV {
public:
DMV(std::string filename);

~DMV();

void run();

void option1();

void option2();

void option3();

void option4();

private:
DriversLicenseRecord** grid;
int size;
};

#endif
