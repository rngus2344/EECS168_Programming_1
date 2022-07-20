/* -----------------------------------------------------------------------------
 *
 * File Name:  main.cpp
 * Author: Guhyoun Nam
 * Assignment: EECS-168 Lab 5
 * Description:
 * Date: 3/27/2019
 *
 ---------------------------------------------------------------------------- */
//Start your program.
#include <iostream>
#include <string>

int main()
{
  std::string word, longest, shortest;
  int size;
  int longer=0, shorter=99999999;
  char** grid=nullptr;

  std::cout << "Input an array size for your words array: ";
  std::cin >> size;
  grid = new char* [size];
  std::cout << "Now please enter " << size << " words\n";
  for(int i=0; i<size; i++)
  {
    std::cout << "Input a word: ";
    std::cin >> word;
    grid[i] = new char [word.length()];
    for(int j=0; j<word.length(); j++)
    {
      grid[i][j] = word.at(j);
    }
  }
  for(int i=0; i<size; i++)
  {
    if(word.length()>=longer)
    {
      longer=word.length();
      longest=grid[i];
    }
  }
  std::cout << "The longest word is: " << longest << '\n';
  for(int i=0; i<size; i++)
  {
    if(word.length()<=shorter)
    {
      shorter=word.length();
      shortest=grid[i];
    }
  }
  std::cout << "The shortest word is: " << shortest << '\n';
}
