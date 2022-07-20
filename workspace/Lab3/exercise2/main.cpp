/* -----------------------------------------------------------------------------
 * File Name:  main.cpp
 * Author: Guhyoun Nam
 * Assignment: EECS-168 Lab 3
 * Description: This program will obtain a numerator and a denominator from the user. Then, it will display the result of long division from the user.
 * Date: 09/17/2019
 ---------------------------------------------------------------------------- */
//Start your program.
#include <iostream>

int main()
{
  int numerator, denominator, result, remainder;
  std::cout << "Enter a numerator: ";
  std::cin >> numerator;
  std::cout << "Enter a denominator: ";
  std::cin >> denominator;

  if(denominator == 0)
  {
    std::cout << "Sorry, you may not divide by zero.\n";
  }
  else
  {
    result = numerator / denominator;
    remainder = numerator - (denominator * result);
    std::cout << numerator << " / " << denominator << " = " << result << " Remainder " << remainder << '\n';
  }
  return(0);
}
