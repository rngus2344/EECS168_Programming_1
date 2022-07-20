/* -----------------------------------------------------------------------------
 *
 * File Name:  main.cpp
 * Author: Guhyoun Nam
 * Assignment: EECS-168 Lab 5
 * Description: This program will create an array of 5 doubles and ask the user
 to input values for the array.
 * Date: 3/27/2019
 *
 ---------------------------------------------------------------------------- */
//Start your program.
#include <iostream>

int main()
{
  double sum, average, largest, smallest=99999999;
  double* nums = nullptr;
  nums = new double [5];
  std::cout << "Please enter 5 numbers\n";
  for (int i=0; i<5; i++)
  {
    std::cout << "Input a number into your array: ";
    std::cin >> nums [i];
  }
  std::cout << "Here are all the numbers in your array: \n";
  std::cout << nums[0] << '\n' << nums[1] << '\n' << nums[2] << '\n' << nums[3] << '\n' << nums[4] << '\n';
  sum = nums[0]+nums[1]+nums[2]+nums[3]+nums[4];
  std::cout << "The sum of all the values is: " << sum << '\n';
  average = sum/5;
  std::cout << "The average of all the values is: " << average << '\n';
  for (int i=0; i<5; i++)
  {
    if (nums[i]>largest)
    {
      largest = nums[i];
    }
  }
  std::cout << "The largest value is: " << largest << '\n';
  for (int i=0; i<5; i++)
  {
    if (nums[i]<smallest)
    {
      smallest = nums[i];
    }
  }
  std::cout << "The smallest value is: " << smallest << '\n';
  delete [] nums;
  return(0);
}
