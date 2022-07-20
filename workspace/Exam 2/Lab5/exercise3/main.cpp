/* -----------------------------------------------------------------------------
 *
 * File Name:  main.cpp
 * Author: Guhyoun Nam
 * Assignment: EECS-168 Lab 5
 * Description: This program will read in the first value that tells you how many
 values are in the file. Then, create an array to store all of those values.
 After it has read in the values, it will display them to the screen.
 The search prompt will obtain a value from the user and confirm whether or not it
 is in the array.
 * Date: 3/27/2019
 *
 ---------------------------------------------------------------------------- */
//Start your program.
#include <fstream>
#include <iostream>

int main()
{
  int a=0;
  int value;
  char quit;

  std::ifstream inFile; //create a variable of type std::ifstream. It will enable reading from files.
  inFile.open("input.txt"); //open a file that has values in it

  //Check if file is open
  if(inFile.is_open())
  {
    inFile >> a;
    int* nums=nullptr;
    nums=new int[a];
    for(int i=0; i<a; i++)
    {
      inFile >> nums[i];
    }
    std::cout << "Contents of input.txt: \n";
    std::cout << "[" << nums[0] << ", " << nums[1] << ", " << nums[2] << ", " << nums[3] << ", " << nums[4] << "]\n" << '\n';
    do
    {
      std::cout << "Input a value to search for: ";
      std::cin >> value;

      if(value!=nums[0]&&value!=nums[1]&&value!=nums[2]&&value!=nums[3]&&value!=nums[4])
      {
        std::cout << value << " is not in the array.\n" << "Do you wish to quit (y/n): ";
        std::cin >> quit;
      }
      else if(value==nums[0]||value==nums[1]||value==nums[2]||value==nums[3]||value==nums[4])
      {
        std::cout << value << " is in the array.\n" << "Do you wish to quit (y/n): ";
        std::cin >> quit;
      }

      inFile.close(); //we're done using the file.
    }
    while(quit=='n'||quit=='N');
    {
      if(quit!='y'||quit!= 'Y')
      {
      }
    }
  }
  else
  {
    std::cout << "File could not be opened!\n";
  }
  return(0);
}
