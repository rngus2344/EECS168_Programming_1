/* -----------------------------------------------------------------------------
 * File Name:  main.cpp
 * Author: Guhyoun Nam
 * Assignment:   EECS-168 Lab 2 Exercise 1
 * Description:  This program will use the Math class to perform square root calculations.
 * Date: 9/10/2019
 ---------------------------------------------------------------------------- */
#include <iostream>
#include <math.h>

int main()
{
  double a, b, c;

  std::cout << "Will use the formula a^2 + b^2 = c^2 to solve for the hypotenuse of a triangle.\nInput a value for a: ";
  std::cin >> a;
  std::cout << "Input a value for b: ";
  std::cin >> b;
  c = sqrt(a*a + b*b);
  std::cout << "The hypotenuse is: ";
  std::cout << c << "\n";
  return(0);
}
