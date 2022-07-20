/* -----------------------------------------------------------------------------
 * File Name:  main.cpp
 * Author: Guhyoun Nam
 * Assignment:   EECS-168 Lab 2 Exercise 4
 * Description:  This program will cast a character to an int.
 * Date: 9/10/2019
 ---------------------------------------------------------------------------- */
#include <iostream>

int main()
{
  char char1;
  int ans;

  std::cout << "Input a character: ";
  std::cin >> char1;
  ans = int(char1);
  std::cout << "The ASCII value for '" << char1 <<"' is: " << ans << "\n" << "Goodbye!\n";
  return(0);
}
