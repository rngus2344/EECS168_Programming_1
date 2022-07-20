/* -----------------------------------------------------------------------------
 * File Name:  main.cpp
 * Author: Guhyoun Nam
 * Assignment: EECS-168 Lab 3
 * Description: This program will open a restaurant that sells three items: Salads, Pasta, and Cake.
 * Date: 09/17/2019
 ---------------------------------------------------------------------------- */
//Start your program.
#include <iostream>

int main()
{
  std::cout.precision(2);
  std::cout << std::fixed;

  char salad, drink, cake;
  int numsalad = 0, numdrink = 0, numcake = 0, age;
  double totsalad, totdrink, totcake, subtot, tax, discount = 0.0, total;

  std::cout << "============================\nWELCOME TO THE RESTAURANT\n============================\n\nDo you want Salads? (y/n): ";
  std::cin >> salad;
  if(salad == 'y' || salad == 'Y')
  {
    std::cout << "How many?: ";
    std::cin >> numsalad;
    if(numsalad < 0)
    {
      numsalad = 0;
    }
  }
  std::cout << '\n';
  std::cout << "Do you want Drinks? (y/n): ";
  std::cin >> drink;
  if(drink == 'y' || drink == 'Y')
  {
    std::cout << "How many?: ";
    std::cin >> numdrink;
    if(numdrink < 0)
    {
      numdrink = 0;
    }
  }
  std::cout << '\n';
  std::cout << "Do you want Cakes? (y/n): ";
  std::cin >> cake;
  if(cake == 'y' || drink == 'Y')
  {
    std::cout << "How many?: ";
    std::cin >> numcake;
    if(numcake < 0)
    {
      numcake = 0;
    }
  }
  std::cout << '\n';
  std::cout << "How old are you?: ";
  std::cin >> age;
  std::cout << "============================\n";

  totsalad = numsalad * 4.25;
  totdrink = numdrink * 1.05;
  totcake = numcake * 3.55;

  std::cout << numsalad << " Salads @ $4.25 ==> $" << totsalad << '\n';
  std::cout << numdrink << " Drinks @ $1.05 ==> $" << totdrink << '\n';
  std::cout << numcake << " Cakes  @ $3.55 ==> $" << totcake << '\n';

  subtot = totsalad + totdrink + totcake;
  tax = subtot * 0.13;
  if(age >= 55)
  {
    discount = numdrink * 1.05 * 0.2;
  }
  else if (age <= 12)
  {
    discount = numcake * 3.55;
  }
  else
  {
    discount = 0.0;
  }
  total = subtot + tax - discount;

  std::cout << "Subtotal: $" << subtot << '\n';
  std::cout << "Tax: $" << tax << '\n';
  std::cout << "Discount: $" << discount << '\n';
  std::cout << "============================\n";
  std::cout << "Total: $" << total << "\n\nPlease come again!\n";
  return(0);
}
