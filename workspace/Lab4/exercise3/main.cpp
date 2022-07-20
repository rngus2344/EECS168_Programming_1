/* -----------------------------------------------------------------------------
 * File Name:  main.cpp
 * Author: Guhyoun Nam
 * Assignment: EECS-168 Lab 4
 * Description: This program requires the user to guess a secret word. The game does not end until the user guesses the word.
 * After they win the game, they are prompted to choose to play again. The secret word that user must guess is "valentine".
 * Date: 09/24/2019
 ---------------------------------------------------------------------------- */
//Start your program.
#include <iostream>
#include <string>

int main()
{
  std::string word;
  std::string guess;
  char again;
  word = "valentine";

  do
  {
    int count=0;

    std::cout << "Welcome to the word guessing game. \nGuess a word: ";
    std::cin >> guess;
    if(guess == word)
    {
      std::cout << "You win! \nWould you like to play again? (y/n): ";
      std::cin >> again;
    }
    else
    {
      do
      {
        if(word.length() > guess.length())
        {
          std::cout << "The word is longer.\nIncorrect. Guess again: ";
          std::cin >> guess;
        }
        else if(word.length() < guess.length())
        {
          std::cout << "The word is shorter.\nIncorrect. Guess again: ";
          std::cin >> guess;
        }
        else
        {
          count=0;
          for(unsigned int i=0; i < word.length(); i++)
          {
            if(word.at(i) == guess.at(i))
            {
              count++;
            }
          }
          std::cout << "You have " << count << " letters correct.\nIncorrect. Guess again: ";
          std::cin >> guess;
        }
      } while (guess != word);
      {
        std::cout << "You win! \nWould you like to play again? (y/n): ";
        std::cin >> again;
      }
    }
  } while (again != 'n' && again != 'N');
  {
    std::cout << "Quit the program.\n";
  }
  return(0);
}
