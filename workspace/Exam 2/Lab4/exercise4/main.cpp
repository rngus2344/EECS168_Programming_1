/* -----------------------------------------------------------------------------
 *
 * File Name: main.cpp
 * Author: Guhyoun Nam
 * Assignment: EECS-168 Lab 4
 * Description: This program will print a triangle of asterisks of size n, called Pyramid.
 * Date: 3/7/2019
 *
 ---------------------------------------------------------------------------- */
//Start your program.
#include <iostream>

int main()
{
  int base;

  std::cout << "Enter the number of asterisks for the base of the triangle: ";
  std::cin >> base;
  for (int i = 0; i < base; i++)
  {
    std::cout << "*";
    for (int j = 0; j < i; j++)
    {
      std::cout << "*";
    }
    std::cout << '\n';
  }
  return(0);
}
