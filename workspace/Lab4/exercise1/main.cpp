/* -----------------------------------------------------------------------------
 * File Name:  main.cpp
 * Author: Guhyoun Nam
 * Assignment: EECS-168 Lab 4
 * Description: This program will obtain a string (assume no whitespace) from the user. Then ask the user for a single character. Finally print the count of occurences of that that character in the string.
 * Date: 09/24/2019
 ---------------------------------------------------------------------------- */
//Start your program.
#include <iostream>
#include <string>

int main()
{
  std::string word;
  char character;
  int count=0;

  std::cout << "Enter a string: ";
  std::cin >> word;
  std::cout << "Enter a character to count: ";
  std::cin >> character;
  for(unsigned int i=0; i<word.length(); i++)
  {
    if(word.at(i) == character)
    {
      count++;
    }
  }
  std::cout << "In the string " << word << " the character '" << character << "' occurs " << count << " time(s).\n";
  return(0);
}
