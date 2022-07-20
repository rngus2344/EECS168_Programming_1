/* ----------------------------------------------------------------------------\
-                                                                               
 *                                                                              
 * File Name:  main.cpp                                                         
 * Author: Guhyoun Nam                                                          
 * Assignment: EECS-168 Lab 2                                                   
 * Description: This program will takes the number of bananas and tell the user how many barrels, bunches, and single bananas it will be packages as.                                                     
 * Date: 2/14/2019                                                              
 *                                                                              
 ---------------------------------------------------------------------------- *\
/
//Start your program. 

#include <iostream>
#include <math.h>

int main()
{
	int n, barrel, bunch, single;
	std::cout<<"How many bananas do you have? ";
	std::cin >> n;
	barrel = (n/32);
	std::cout << "Barrels: " << barrel << std::endl;
	bunch = (n-(barrel)*32)/8;
	std::cout << "Bunches: ";
	std::cout << bunch << std::endl;
	single = n-(barrel)*32-(bunch)*8; 
	std::cout << "Singles: ";
	std::cout << single << "\n";
	return (0);
}
