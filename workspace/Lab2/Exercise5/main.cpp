/* -----------------------------------------------------------------------------
 * File Name:  main.cpp
 * Author: Guhyoun Nam
 * Assignment:   EECS-168 Lab 2 Exercise 5
 * Description:  This program will take a number of sodas and then tell the user how many Fridge Cubes, six packs, and single sodas it will be packages as.
 * Date: 9/10/2019
 ---------------------------------------------------------------------------- */
#include <iostream>

int main()
{
  int sodas, FCubes, sixpacks, singles;

  std::cout << "How many sodas do you have? ";
  std::cin >> sodas;
  FCubes = sodas/24;
  sixpacks = (sodas-FCubes*24)/6;
  singles = sodas-FCubes*24-sixpacks*6;
  std::cout << "Fridge cubes: " << FCubes <<"\n" << "Six-packs: " << sixpacks << "\n" << "Singles: " << singles << "\n";
  return(0);
}
