/* -----------------------------------------------------------------------------
 * File Name:  main.cpp
 * Author: Guhyoun Nam
 * Assignment: EECS-168 Lab 3
 * Description: This program will obtain a wind speed from the user and tell them either what category or type if it's just a tropical storm.
 * Date: 09/17/2019
 ---------------------------------------------------------------------------- */
//Start your program.
#include <iostream>

int main()
{
  int wind;

  std::cout << "Input a wind speed (m/s): ";
  std::cin >> wind;

  if(wind >= 0)
  {
    std::cout << "A wind speed of " << wind << " m/s is a ";
    if(wind >= 70)
    {
      std::cout << "Category 5 hurricane.\n";
    }
    else if(wind >= 58)
    {
      std::cout << "Category 4 hurricane.\n";
    }
    else if(wind >= 50)
    {
      std::cout << "Category 3 hurricane.\n";
    }
    else if(wind >= 43)
    {
      std::cout << "Category 2 hurricane.\n";
    }
    else if(wind >= 33)
    {
      std::cout << "Category 1 hurricane.\n";
    }
    else if(wind >= 18)
    {
      std::cout << "Tropical Storm.\n";
    }
    else
    {
      std::cout << "Tropical Depression.\n";
    }
  }
  else
  {
    std::cout << "Negative wind? Sorry, that's invalid.\n";
  }
  return(0);
}
