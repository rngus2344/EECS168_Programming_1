/* -----------------------------------------------------------------------------
 * File Name:  main.cpp
 * Author: Guhyoun Nam
 * Assignment:   EECS-168 Lab 2 Exercise 3
 * Description:  This program will convert the temperature from Fahrenheit to Celsius.
 * Date: 9/10/2019
 ---------------------------------------------------------------------------- */
#include <iostream>

int main()
{
  double tempF, tempC;

  std::cout << "Input a temperature(°F): ";
  std::cin >> tempF;
  tempC = (tempF-32)*5/9;
  std::cout << "Temperature(°C) is: " << tempC << "\n";
  return(0);
}
