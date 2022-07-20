#include <fstream>
#include <iostream>
#include <string>
#include <stdio.h>
#include "DMV.h"
#include <limits>

//constructor
DMV::DMV(std::string fileName)
{
  m_fileName = fileName;
  std::string firstName = "John";
  std::string lastName = "Doe";
  int age = 0;
  char voter;
  int licenseNumber = 0;

  std::ifstream inFile;

  inFile.open(fileName);
  if(inFile.is_open())
  {
    inFile >> m_size;
    m_dlr = new DriversLicenseRecord[m_size];

    for(int i=0; i<m_size; i++)
    {
      inFile >> firstName;
      inFile >> lastName;
      inFile >> age;
      inFile >> voter;
      inFile >> licenseNumber;
      m_dlr[i] = DriversLicenseRecord(firstName, lastName, age, voter, licenseNumber);
    }
    inFile.close();
  }
  else
  {
    throw(std::runtime_error("The file could not be opened.\n"));
  }
}

//destructor
DMV::~DMV()
{
  delete[] m_dlr;
}

//running the program.
void DMV::run()
{
  int quit=0;
  do
  {
    std::cout << "Select an option:\n1) Print all Drivers Info\n2) Print all voters\n";
    std::cout << "3) Print drivers by last initial\n4) Print drivers in age range\n5) Quit\nEnter your choice: ";
    std::cin >> quit;

    while (std::cin.fail())
    {
      std::cin.clear(); // unset failbit
      // skip bad input up to the next newline
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      std::cout << "Sorry, your input did not seem to be an int. Try again: ";
      std::cin >> quit;
    }
    // Flush out anything left in the stream (e.g. if they type 2.5 for an int
    // the .5 would still be there
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "You entered: " << quit << '\n';

    if(quit==1)
    {
      std::cout << '\n';
      printAllDriverInfo();
      std::cout << '\n';
    }
    else if(quit==2)
    {
      std::cout << '\n';
      for(int i=0; i<m_size; i++)
      {
        if(m_dlr[i].getVoter()=='Y')
        {
          std::cout << m_dlr[i].getLastName() << ", " << m_dlr[i].getFirstName() << " (";
          std::cout << m_dlr[i].getAge() << "): " << m_dlr[i].getLicenseNumber() << '\n';
        }
      }
      std::cout << '\n';
    }
    else if(quit==3)
    {
      char initial;
      int num=0, count=0;
      std::cout << "Input an initial: ";
      std::cin >> initial;
      std::cout << '\n';
      if(static_cast<int>(initial) > 96 && static_cast<int>(initial) < 123)
      {
        num = static_cast<int>(initial)-32;
        for(int i=0; i<m_size; i++)
        {
          if(m_dlr[i].getLastName().at(0)==static_cast<char>(num))
          {
            std::cout << m_dlr[i].getLastName() << ", " << m_dlr[i].getFirstName() << " (";
            std::cout << m_dlr[i].getAge() << "): " << m_dlr[i].getLicenseNumber() << '\n';
          }
          else
          {
            count++;
          }
          if(count==m_size)
          {
            std::cout << "No record found.\n";
          }
        }
      }
      else if(static_cast<int>(initial) > 64 && static_cast<int>(initial) < 91)
      {
        for(int i=0; i<m_size; i++)
        {
          if(m_dlr[i].getLastName().at(0)==initial)
          {
            std::cout << m_dlr[i].getLastName() << ", " << m_dlr[i].getFirstName() << " (";
            std::cout << m_dlr[i].getAge() << "): " << m_dlr[i].getLicenseNumber() << '\n';
          }
          else
          {
            count++;
          }
          if(count==m_size)
          {
            std::cout << "No record found.\n";
          }
        }
      }
      else
      {
        std::cout << "Invalid input.\n";
      }
      std::cout << '\n';
    }
    else if(quit==4)
    {
      int ageMin=0,ageMax=0;
      std::cout << "Set a minimum age: ";
      std::cin >> ageMin;

      while (std::cin.fail())
      {
        std::cin.clear(); // unset failbit
        // skip bad input up to the next newline
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Sorry, your input did not seem to be an int. Try again: ";
        std::cin >> ageMin;
      }
      // Flush out anything left in the stream (e.g. if they type 2.5 for an int
      // the .5 would still be there
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      std::cout << "You entered: " << ageMin << '\n';

      std::cout << "Set a maximum age: ";
      std::cin >> ageMax;

      while (std::cin.fail())
      {
        std::cin.clear(); // unset failbit
        // skip bad input up to the next newline
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Sorry, your input did not seem to be an int. Try again: ";
        std::cin >> ageMax;
      }
      // Flush out anything left in the stream (e.g. if they type 2.5 for an int
      // the .5 would still be there
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      std::cout << "You entered: " << ageMax << '\n';
      std::cout << '\n';

      for(int i=0; i<m_size; i++)
      {
        if(m_dlr[i].getAge()>=ageMin && m_dlr[i].getAge()<=ageMax)
        {
          std::cout << m_dlr[i].getLastName() << ", " << m_dlr[i].getFirstName() << " (";
          std::cout << m_dlr[i].getAge() << "): " << m_dlr[i].getLicenseNumber() << '\n';
        }
      }
      std::cout << '\n';
    }
    else if(quit>5||quit<1)
    {
      std::cout << "Invalid input.";
    }
  } while(quit!=5);
  {
    std::cout << "Exit program.\n";
  }
}

void DMV::printAllDriverInfo()
{
  for(int i=0; i<m_size; i++)
  {
    std::cout << m_dlr[i].getLastName() << ", " << m_dlr[i].getFirstName() << " (";
    std::cout << m_dlr[i].getAge() << "): " << m_dlr[i].getLicenseNumber() << '\n';
  }
}
