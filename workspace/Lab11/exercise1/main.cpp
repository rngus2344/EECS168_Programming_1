/* -----------------------------------------------------------------------------
 * File Name:  main.cpp
 * Author: Guhyoun Nam
 * KUID: 2930128
 * Assignment: EECS-168 Lab11-exercise 1
 * Description: This program will read in Drivers License Records from file and
 * then let the user interact with the data.
 * Date: 12/03/2019
 ---------------------------------------------------------------------------- */
//Start your program.
#include "DriversLicenseRecord.h"
#include "DMV.h"
#include <iostream>
#include <string>

int main(int argc, char** argv)
{
  //Do a check to make sure we have the right number of arguments,
  //exit if there aren't enough arguments
  if(argc<1)
  {
    std::cout << "There are not enough arguments. Exit program.\n";
  }
  else
  {
    std::string filename=argv[1];
    DMV myDMV(filename);
    myDMV.run();
  }
  return(0);
}
