/* -----------------------------------------------------------------------------
 * File Name:  main.cpp
 * Author: Guhyoun Nam
 * KUID: 2930128
 * Assignment: EECS-168 Lab 6 - Exercise 3
 * Description: This program will read in the first value from 'input.txt' that
 * tells us how many values are in the file. Then, it will create an array to
 * store all of those values. After it've read in the values it will display them
 * to the screen. This program also obtains a value from the user and confirms
 * whether or not it is in the array.
 * Date: 10/08/2019
 ---------------------------------------------------------------------------- */
//Start your program.
#include <iostream>
#include <fstream>

int main()
{
  int size = 0, value, count;
  int* num = nullptr;
  char quit;

  std::ifstream infile;
  infile.open("input.txt");

  if(infile.is_open())
  {
    infile >> size;
    num = new int[size];
    for(int i=0; i<size; i++)
    {
      infile >> num[i];
    }
    std::cout << "Contents of input.txt:\n[";
    for(int j=0; j<size; j++)
    {
      if(j != size-1)
      {
        std::cout << num[j] << ", ";
      }
      else
      {
        std::cout << num[j] << "]\n";
      }
    }
    do
    {
      count=0;
      std::cout << "Input a value to search for: ";
      std::cin >> value;
      for(int k=0; k<size; k++)
      {
        if(value==num[k])
        {
          count++;
        }
      }
      if(count>0)
      {
        std::cout << value << " is in the array.\n";
      }
      else
      {
        std::cout << value << " is not in the array.\n";
      }
      std::cout << "Do you wish to quit (y/n): ";
      std::cin >> quit;
    } while(quit=='n' || quit=='N');
    {
    }
  }
  else
  {
    std::cout << "File could not be opened.\n";
  }
  return(0);
}
