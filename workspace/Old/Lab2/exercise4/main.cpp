/* -----------------------------------------------------------------------------
 *
 * File Name:  main.cpp
 * Author: Guhyoun Nam
 * Assignment: EECS-168 Lab 2
 * Description: This program will cast a character to an int. program
 * Date: 2/14/2019
 *
 ---------------------------------------------------------------------------- */
//Start your program.
#include <iostream>
#include <math.h>

int main()
{
  char a;
  std::cout << "Input a character: ";
  std::cin >> a;
  std::cout << "The ASCII value for '" << a << "' is: ";
  std::cout << (int) a << "\n";
  std::cout << "Goodbye!\n";
  return (0);
}
