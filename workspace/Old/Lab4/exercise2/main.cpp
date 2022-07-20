/* -----------------------------------------------------------------------------
 *
 * File Name: main.cpp
 * Author: Guhyoun Nam
 * Assignment: EECS-168 Lab 4
 * Description: WordGuessingGame. This program will make the user guess a
 secret word. The game won't end until the user guesses the correct word, but
 along the way the program will help the user.
 * Date: 3/7/2019
 *
 ---------------------------------------------------------------------------- */
//Start your program.

#include <iostream>
#include <string>

int main()
{
  int n=0;
  char answer;
  std::string word, guess;
  word = "valentine";
  do
  {
    std::cout << "Welcome to the word guessing game.\n" <<"Guess a word: ";
    std::cin >> guess;
    do
    {
      if(guess.length() < word.length())
      {
        std::cout << "The word is longer.\n";
      }
      else if(guess.length() > word.length())
      {
        std::cout << "The word is shorter.\n";
      }
      else if(guess.length() == word.length())
      {
        for(int i=0; i<=8; i++)
        {
          if(guess.at(i) == word.at(i))
          {
            n++;
          }
          else
          {
          }
        }
        std::cout << "you have " << n << " letters correct.\n";
      }
      std::cout << "Incorrect. Guess again: \n";
      std::cin >> guess;
      n=0;
    }
    while(guess != "valentine");
    {
      std::cout << "You win!\n" << "Would you like to play again? (y/n): ";
      std::cin >> answer;
    }
  }
  while(answer == 'y'||answer == 'Y');
  {
    if(answer != 'n'||answer != 'n')
    {
      std::cout << "Invalid input.\n";
    }
  }
  return(0);
}
