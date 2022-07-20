/* -----------------------------------------------------------------------------
 * File Name:  main.cpp
 * Author: Guhyoun Nam
 * KUID: 2930128
 * Assignment: EECS-168 Lab 5 - Exercise 1
 * Description: This program will present the user with a choice of patterns.
 * Once the user makes a valid chose, the user then sets the size of the pattern.
 * Date: 10/01/2019
 ---------------------------------------------------------------------------- */
//Start your program.
#include <iostream>
// #include <string>
// #include <vector>
// #include "myStack.h"

int main()
{
  int** array;

  const int m = 6;    // row
  const int n = 10;   // col

  array = new int*[m];
  for( int i=0; i<m; i++ )
  {
    array[i] = new int[n];
  }

  for( int i=0; i<m; i++ )
  {
    for( int j=0; j<n; j++ )
    {
      array[i][j] = i*n+j;
    }
  }

  for( int i=0; i<m; i++ )
  {
    for( int j=0; j<n; j++ )
    {
      std::cout << array[i][j] << ' ';
    }
    std::cout << '\n';
  }

  std::cout << "----------------------------------------\n";
  return 0;
}
