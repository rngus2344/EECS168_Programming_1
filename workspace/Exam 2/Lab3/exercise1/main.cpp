/* -----------------------------------------------------------------------------
 *
 * File Name:  main.cpp
 * Author: Guhyoun Nam
 * Assignment: EECS-168 Lab 3
 * Description: This program will tell us the category of the hurricane.
 * Date: 2/21/2019
 *
 ---------------------------------------------------------------------------- */
//Start your program.
#include <iostream>

int main()
{
  int wind = 0;
  std::cout << "Input a wind speed (m/s): ";
  std::cin >> wind;
  if (wind <0)
  {
    std::cout << "Negative wind? Sorry, that's invalid. \n";
  }
  else if (wind <= 17)
  {
    std::cout << "A wind speed of " << wind << " m/s is a ";
    std::cout << "Tropical Depression. \n";
  }
  else if (wind <= 32)
  {
    std::cout << "A wind speed of " << wind << " m/s is a ";
    std::cout << "Tropical Storm. \n";
  }
  else if (wind <= 42)
  {
    std::cout << "A wind speed of " << wind << " m/s is a ";
    std::cout << "Category 1 hurricane. \n";
  }
  else if (wind <= 49)
  {
    std::cout << "A wind speed of " << wind << " m/s is a ";
    std::cout << "Category 2 hurricane. \n";
  }
  else if (wind <= 58)
  {
    std::cout << "A wind speed of " << wind << " m/s is a ";
    std::cout << "Category 3 hurricane. \n";
  }
  else if (wind < 70)
  {
    std::cout << "A wind speed of " << wind << " m/s is a ";
    std::cout << "Category 4 hurricane. \n";
  }
  else if (wind >= 70)
  {
    std::cout << "A wind speed of " << wind << " m/s is a ";
    std::cout << "Category 5 hurricane. \n";
  }
  return(0);
}
