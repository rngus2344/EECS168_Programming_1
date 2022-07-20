/* -----------------------------------------------------------------------------
 *
 * File Name:  main.cpp
 * Author: Guhyoun Nam
 * Assignment: EECS-168 Lab 3
 * Description: This program will ask the user for what day they want a count of people with the flu for. Then display the amount.
 * Date: 2/21/2019
 *
 ---------------------------------------------------------------------------- */
//Start your program.
#include <iostream>

int main()
{
  int x, temp;
  int first = 1, second = 5, third = 17;
  std::cout << "OUTBREAK!\n" << "What day do you want a sick count for?: ";
  std::cin >> x;

  if (x < 1) std::cout << "Invalid day" << std::endl;
  else if (x == 1) std::cout << "Total people with flu: " << first << std::endl;
  else if (x == 2) std::cout << "Total people with flu: " << second << std::endl;
  else if (x == 3) std::cout << "Total people with flu: " << third << std::endl;

  for (int i = 4; i < x; i++) {
    temp = first + second + third;
    first = second;
    second = third;
    third = temp;
  }
  if (x >= 4)
    std::cout << "Total people with flu: " << first + second + third << std::endl;

  return(0);
}
