/* -----------------------------------------------------------------------------
 *
 * File Name:  main.cpp
 * Author: Guhyoun Nam
 * Assignment: EECS-168 Lab 2
 * Description: This program will converts the temperature in Fahrenheit into the temperature in Celsius.
 * Date: 2/14/2019
 *
 ---------------------------------------------------------------------------- */
//Start your program.

#include <math.h>
#include <iostream>

int main()
{
  double t, answer;
  std::cout << "Input temperature(°F): ";
  std::cin >> t;
  answer = (t - 32)*5/9;
  std::cout << "Temperature(°C): ";
  std::cout << answer << "\n";
  return (0);
}
