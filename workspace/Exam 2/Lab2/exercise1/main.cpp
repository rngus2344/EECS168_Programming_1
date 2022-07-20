/* -----------------------------------------------------------------------------
 *
 * File Name:  main.cpp
 * Author: Guhyoun Nam 
 * Assignment: EECS-168 Lab 2
 * Description: This program will use the formula a^2 + b^2 = c^2 to solve the hypotenuse of a triangle.
 * Date: 2/14/2019
 *
 ---------------------------------------------------------------------------- */
//Start your program.
#include <iostream>
#include <math.h>

int main()
{
	double a, b, answer;
	std::cout << "Will use the formula a^2 + b^2 = c^2 to solve the hypotenuse of a triangle.\n";
	std::cout << "Input a value for a: ";
	std::cin >> a;
	std::cout << "Input a value for b: ";
	std::cin >> b;
	answer = sqrt( a*a + b*b );
	std::cout << "The hypotenuse is : ";
	std::cout << answer << "\n";
	return (0);
}
