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
#include <fstream>
#include <iostream>

int main()
{
  std::string name;
  std::cout << "Input a file name: ";
  std::cin >> name;
  char* grid=nullptr;
  grid=new char[name.length()];
  for(int i=0; i<name.length(); i++)
  {
    grid[i]=name.at(i)
  }

  std::ofstream myOutFile;
  std::string fileName = name;
  myOutFile.open(fileName); //You can pass in strings if you want

  //Put some stuff in the file
  myOutFile << 5 << '\n';
  myOutFile << 10.0 << '\n';
  myOutFile << 40.0 << '\n';
  myOutFile << 20.0 << '\n';
  myOutFile << 30.0 << '\n';
  myOutFile << 50.0 << '\n';

  myOutFile.close(); //VERY important to do with output files

  return(0);
}
