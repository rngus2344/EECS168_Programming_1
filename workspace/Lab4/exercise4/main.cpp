/* -----------------------------------------------------------------------------
 * File Name:  main.cpp
 * Author: Guhyoun Nam
 * Assignment: EECS-168 Lab 4
 * Description: This program will allow the user to see the ASCII representation of a specific number they want or to see all the ASCII conversions from 33 to 126.
 * Date: 09/24/2019
 ---------------------------------------------------------------------------- */
//Start your program.
#include <iostream>

int main()
{
  int choice, num;

  std::cout << "1) Select a specific ASCII character provided an int.\n";
  std::cout << "2) Display visible ASCII values (33 to 126).\n3) Exit\nChoice: ";
  std::cin >> choice;
  do
  {
    if(choice == 1)
    {
      std::cout << "Enter a value: ";
      std::cin >> num;
      std::cout << num << " = " << static_cast<char>(num) << '\n';

      std::cout << "\n1) Select a specific ASCII character provided an int.\n";
      std::cout << "2) Display visible ASCII values (33 to 126).\n3) Exit\nChoice: ";
      std::cin >> choice;
    }
    else if(choice == 2)
    {
      for(int i=33; i<=126; i++)
      {
        std::cout << i << " = " << static_cast<char>(i) << '\n';
      }
      std::cout << "\n1) Select a specific ASCII character provided an int.\n";
      std::cout << "2) Display visible ASCII values (33 to 126).\n3) Exit\nChoice: ";
      std::cin >> choice;
    }
  } while (choice != 3);
  {
  }
  return(0);
}
