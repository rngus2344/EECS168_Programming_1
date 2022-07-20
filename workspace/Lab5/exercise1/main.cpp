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

int main()
{
  int pattern, size;
  char quit;

  do
  {
    int total = 0;

    std::cout << "1) Checkerboard\n2) Twin Islands\n3) Running Total\n4) Upper Left Triangle\n5) Upper Right Triangle\n\n";
    std::cout << "Input a choice: ";
    std::cin >> pattern;
    std::cout << "\nInput a size: ";
    std::cin >> size;

    if(size < 3)
    {
      std::cout << "Error\n";
    }
    else if(pattern == 1)
    {
      for(int i=0; i<size; i++)
      {
        for(int j=0;j<size; j++)
        {
          if((i+j)%2 == 0)
          {
            std::cout << "O";
          }
          else
          {
            std::cout << "X";
          }
        }
        std::cout << '\n';
      }
      std::cout << '\n';
    }
    else if(pattern == 2)
    {
      for(int i=0; i<size; i++)
      {
        for(int j=0;j<size; j++)
        {
          if(i<(size/2) && j<(size/2))
          {
            std::cout << "!";
          }
          else if(i+j == size-1)
          {
            std::cout << "*";
          }
          else if(i>=(size-size/2) && j>=(size-size/2))
          {
            std::cout << "?";
          }
          else
          {
            std::cout << "~";
          }
        }
        std::cout << '\n';
      }
      std::cout << '\n';
    }
    else if(pattern == 3)
    {
      for(int i=0; i<size; i++)
      {
        for(int j=0;j<size; j++)
        {
          total = total + 1;
          std::cout << total << ", ";
        }
        std::cout << '\n';
      }
      std::cout << '\n';
    }
    else if(pattern == 4)
    {
      for(int i=0; i<size; i++)
      {
        for(int j=0;j<size-i; j++)
        {
          std::cout << "*";
        }
        std::cout << '\n';
      }
      std::cout << '\n';
    }
    else if(pattern == 5)
    {
      for(int i=0; i<size; i++)
      {
        for(int j=0;j<size; j++)
        {
          if(i<=j)
          {
            std::cout << "*";
          }
          else
          {
            std::cout << " ";
          }
        }
        std::cout << '\n';
      }
      std::cout << '\n';
    }
    else
    {
      std::cout << "Error\n";
    }
    std::cout << "Do you want to quit (y/n)?: ";
    std::cin >> quit;
  } while(quit == 'n' || quit == 'N');
  {
    std::cout << "Goodbye...\n";
  }
  return(0);
}
