/* -----------------------------------------------------------------------------
 *
 * File Name: main.cpp
 * Author: Guhyoun Nam
 * Assignment: EECS-168 Lab 4
 * Description: This program will create a 10x10 board of dashes (subtraction symbol).
 Then it will obtain a coordinate from the user (0-9 in each dimension) for the user
 to draw a big plus sign made of the '+' characters.
 * Date: 3/7/2019
 *
 ---------------------------------------------------------------------------- */
//Start your program.
#include <iostream>
//#include <string>

int main()
{
  int x, y;

  std::cout << "Input a coordinate to draw a big plus (row col): ";
  std::cin >> x >> y;
  if(x <= 9 && y <= 9)
  {
    std::cout << " 0 1 2 3 4 5 6 7 8 9\n";
    for(int i = 0; i < 10; i++)
    {
      std::cout << i;
      for(int j = 0; j < 10; j++)
      {
        if (i == y && j == x)
        {std::cout << "+ ";}
        else if(i==y+1 && j==x)
        {std::cout << "+ ";}
        else if(i==y-1 && j==x)
        {std::cout << "+ ";}
        else if(j==x+1 && i==y)
        {std::cout << "+ ";}
        else if(j==x-1 && i==y)
        {std::cout << "+ ";}
        else
        {
          std::cout << "- ";
        }
      }
      std::cout << '\n';
    }
  }
  else
  {
    std::cout << "Invalid coordinate \n";
  }
  return(0);
}
