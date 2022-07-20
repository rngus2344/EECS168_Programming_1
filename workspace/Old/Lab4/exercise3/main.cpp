/* -----------------------------------------------------------------------------
 *
 * File Name: main.cpp
 * Author: Guhyoun Nam
 * Assignment: EECS-168 Lab 4
 * Description: This program obtains a dimension from the user to print an nxn checkerboard.
 The checkerboard will be combination of As and Bs.
 * Date: 3/7/2019
 *
 ---------------------------------------------------------------------------- */
//Start your program.
#include <iostream>

int main()
{
  int size = 0;
  std::cout << "Input size of your board (nxn): ";
  std::cin >> size;
  for(int i = 0; i < size; i++)
  {
    for(int j = 0; j < size; j++)
    {
      if ((i % 2) == (j % 2))
      {
        std::cout << "A";
      }
      else
      {
        std::cout << "B";
      }
    }
    std::cout << '\n';
  }
  return(0);
}
