/* ----------------------------------------------------------------------------\
-
 *
 * File Name:  main.cpp
 * Author: Guhyoun Nam
 * Assignment: EECS-168 Lab 2
 * Description: This program will solve the quadratic equation.
 * Date: 2/14/2019
 *
 ---------------------------------------------------------------------------- *\
/
//Start your program.

#include <iostream>
#include <math.h>

int main()
{
  double a, b, c, root1, root2;
  std::cout << "Input a: ";
  std::cin >> a;
  std::cout << "Input b: ";
  std::cin >> b;
  std::cout << "Input c: ";
  std::cin >> c;
  root1 = ( -b + sqrt( b*b - 4*a*c ))/ (2*a);
  std::cout << "root 1: ";
  std::cout << root1 << "\n";
  root2 = ( -b - sqrt( b*b - 4*a*c ))/ (2*a);
  std::cout << "root 2: ";
  std::cout << root2 << "\n";
  return (0);
}
