/* -----------------------------------------------------------------------------
 * File Name:  main.cpp
 * Author: Guhyoun Nam
 * KUID: 2930128
 * Assignment: EECS-168 Lab 6 - Exercise 2
 * Description: This program will let the user decide how big this array is.
 * It will prompt the user to populate the array with strings. Then it will
 * display the longest and shortest string.
 * Date: 10/08/2019
 ---------------------------------------------------------------------------- */
//Start your program.
#include <iostream>
#include <string>

int main()
{
  int size =0;
  std::string* word = nullptr;
  std::string longest;
  std::string shortest;

  std::cout << "Input an array size for your words array: ";
  std::cin >> size;
  if(size < 1)
  {
    do
    {
      std::cout << "Invalid size.\n";
      std::cout << "Input an array size for your words array: ";
      std::cin >> size;
    } while(size < 1);
    {
      word = new std::string[size];

      std::cout << "Now please enter " << size << " words\n";
      for(int i=0; i<size; i++)
      {
        std::cout << "Input a word: ";
        std::cin >> word[i];
        if(i==0)
        {
          longest = word[i];
          shortest = word[i];
        }
        else if(longest.length() < word[i].length())
        {
          longest = word[i];
        }
        else if(shortest.length() > word[i].length())
        {
          shortest = word[i];
        }
      }
      std::cout << "The longest word is: " << longest << '\n';
      std::cout << "The shortest word is: " << shortest << '\n';
    }
  }
  else
  {
    word = new std::string[size];

    std::cout << "Now please enter " << size << " words\n";
    for(int i=0; i<size; i++)
    {
      std::cout << "Input a word: ";
      std::cin >> word[i];
      if(i==0)
      {
        longest = word[i];
        shortest = word[i];
      }
      else if(longest.length() < word[i].length())
      {
        longest = word[i];
      }
      else if(shortest.length() > word[i].length())
      {
        shortest = word[i];
      }
    }
    std::cout << "The longest word is: " << longest << '\n';
    std::cout << "The shortest word is: " << shortest << '\n';
  }
  delete[] word;
  return(0);
}
