/* -----------------------------------------------------------------------------
 * File Name:  main.cpp
 * Author: Guhyoun Nam
 * Assignment: EECS-168 Lab 4
 * Description: This program will will make the user guess a random number between 1 and 100 (inclusive).
 * The game won't end until the user guesses the correct number, but along the way it will help the user.
 ---------------------------------------------------------------------------- */
//Start your program.
#include <iostream>
#include <stdlib.h>
#include <time.h>

int main()
{
  char again;
  do
  {
    int guess, diff=100;
    int num=0, count=0, closest=0;

    srand( time(NULL) );
    for(int i=0; i<99; i++)
    {
      num = rand() % 100 + 1;
    }

    std::cout << "Welcome to the number guessing game.\n";
    std::cout << "Guess a number: ";
    count++;
    std::cin >> guess;

    do
    {
      if(guess < num)
      {
        count++;
        if(abs(num-guess) < diff)
        {
          closest = guess;
        }
        std::cout << "Sorry, your guess is too low.\n";
        std::cout << "Guess a number: ";
        std::cin >> guess;
      }
      else if(guess > num)
      {
        count++;
        if(abs(num-guess) < diff)
        {
          closest = guess;
        }
        std::cout << "Sorry, your guess is too high.\n";
        std::cout << "Guess a number: ";
        std::cin >> guess;
      }
    } while(guess != num);
    {
      std::cout << "You win!\nYou guessed the secret number after " << count << " guess(es).\n";
      std::cout << "Your closest guess was " << closest << ".\n";
      std::cout << "Would you like to play again? (y/n): ";
      std::cin >> again;
    }
  } while(again != 'n' && again != 'N');
  {
    std::cout << "Quit the program.\n";
  }
  return(0);
}
