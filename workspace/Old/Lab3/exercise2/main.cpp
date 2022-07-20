/* -----------------------------------------------------------------------------
 *
 * File Name:  main.cpp
 * Author: Guhyoun Nam
 * Assignment: EECS-168 Lab 3
 * Description: This program will allow the user to see the ASCII representation of a specific number they want or to see all the ASCII conversions from 33 to 126.
 * Date: 2/21/2019
 *
 ---------------------------------------------------------------------------- */
//Start your program.
#include <iostream>

int main()
{
  int x,y;
  std::cout << "1) Select a specific number \n" << "2) Display visible ASCII values (33 to 126)\n" << "3) Exit \n";
  std::cout << "Choice: ";
  std::cin >> x;
  while (x != 3)
  {
    if (x == 1)
    {
      std::cout << "Enter value: ";
      std::cin >> y;
      std::cout << y << " = " << static_cast <char> (y) << '\n';
      std::cout << "\n1) Select a specific number \n" << "2) Display visible ASCII values (33 to 126)\n" << "3) Exit \n";
      std::cout << "Choice: ";
      std::cin >> x;
    }
    else if (x == 2)
    {
      for (int i = 33; i <= 126; i++)
      {
        std::cout << i << " = " << static_cast <char> (i) << '\n';
      }
      std::cout << "\n1) Select a specific number \n" << "2) Display visible ASCII values (33 to 126)\n" << "3) Exit \n";
      std::cout << "Choice: ";
      std::cin >> x;
    }
    else
    {
      std::cout << "ERROR \n";
      std::cout << "\n1) Select a specific number \n" << "2) Display visible ASCII values (33 to 126)\n" << "3) Exit \n";
      std::cout << "Choice: ";
      std::cin >> x;
    }
  }
  return(0);
}
