/* -----------------------------------------------------------------------------
 * File Name:  main.cpp
 * Author: Guhyoun Nam
 * KUID: 2930128
 * Assignment: EECS-168 Lab 6 - Exercise 1
 * Description: This program will ask the user to input values for the array.
 * Then it will display the values back to the user after it obtains all of them.
 * It will also calculate sum, average, min, and max for the array of doubles.
 * Date: 10/08/2019
 ---------------------------------------------------------------------------- */
//Start your program.
#include <iostream>

int main()
{
  const int size = 5;
  double sum=0, avg, largest=0, smallest=0;
  double nums[size];

  std::cout << "Please enter 5 numbers\n";
  for(int i=0; i<5; i++)
  {
    std::cout << "Input a number into your array: ";
    std::cin >> nums[i];
    sum = sum + nums[i];
    if(i==0)
    {
      largest = nums[i];
      smallest = nums[i];
    }
    else if(largest < nums[i])
    {
      largest = nums[i];
    }
    else if(smallest > nums[i])
    {
      smallest = nums[i];
    }
  }
  std::cout << "Here are all the numbers in your array: \n";
  for(int i=0; i<5; i++)
  {
    std::cout << nums[i] << '\n';
  }
  avg = sum/5;
  std::cout << "The sum of all the values is: " << sum << '\n';
  std::cout << "The average of all the values is: " << avg << '\n';
  std::cout << "The largest value is: " << largest << '\n';
  std::cout << "The smallest value is: " << smallest << '\n';
  return(0);
}
