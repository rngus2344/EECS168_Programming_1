/* -----------------------------------------------------------------------------
 * File Name:  main.cpp
 * Author: Guhyoun Nam
 * Assignment: EECS-168 Lab 4
 * Description: This program will ask the user for what day they want a count of people with the flu for. Then display the amount.
 * Date: 09/24/2019
 ---------------------------------------------------------------------------- */
//Start your program.
#include <iostream>

int main()
{
  int day, temp;
  int first = 1, second = 5, third = 17;

  std::cout << "OUTBREAK!\nWhat day do you want a sick count for?: ";
  std::cin >> day;
  if(day < 1)
  {
    std::cout << "Invalid day.\n";
  }
  else if(day == 1)
  {
    std::cout << "Total people with flu: " << first << '\n';
  }
  else if(day == 2)
  {
    std::cout << "Total people with flu: " << second << '\n';
  }
  else if(day == 3)
  {
    std::cout << "Total people with flu: " << third << '\n';
  }

  for (int i=4; i<day; i++)
  {
    temp = first + second + third;
    first = second;
    second = third;
    third = temp;
  }

  if(day >= 4)
  {
    std::cout << "Total people with flu: " << first + second + third << '\n';
  }
  return(0);
}
