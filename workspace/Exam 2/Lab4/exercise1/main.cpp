/* -----------------------------------------------------------------------------
 *
 * File Name: main.cpp
 * Author: Guhyoun Nam
 * Assignment: EECS-168 Lab 4
 * Description: NumberGuessingGame. This program will make the user guess a random number between 1
 and 100 (inclusive). The game won't end until the user guesses the correct number,
 but along the way the program will help the user.
 * Date: 3/7/2019
 *
 ---------------------------------------------------------------------------- */
//Start your program.
#include <iostream>
#include <stdlib.h>
#include <time.h>

int main()
{
  int number=0, guess, closest=0;
  char answer;
  do
  {
    int guesses=0;
    srand( time(NULL) );
    for(int i=0; i<99; i++)
    {
      number = rand() % 100 + 1;
    }
    std::cout << "Welcome to the number guessing game.\n" <<"Guess a number: ";
    std::cin >> guess;
    guesses++;
    do
    {
      std::cout << "Sorry, your guess is too ";
      if(guess > number)
      {
        std::cout << "high.\n";
        closest = guess;
      }
      else if(guess < number)
      {
        std::cout << "low.\n";
        closest = guess;
      }
      std::cout << "Guess a number: ";
      std::cin >> guess;
      guesses++;
    }
    while(guess != number);
    {
      std::cout << "You win!\n" << "You guessed the secret number after " << guesses << " guess(es).\n" << "Your closest guess was " << closest <<".\n";
      std::cout << "Would you like to play again? (y/n): ";
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
