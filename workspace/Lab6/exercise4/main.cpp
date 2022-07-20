/* -----------------------------------------------------------------------------
 * File Name:  main.cpp
 * Author: Guhyoun Nam
 * KUID: 2930128
 * Assignment: EECS-168 Lab 6 - Exercise 4
 * Description: This program will prompt the user for a file name and create a file
 * with the file name and has inputs inside. Then it will create "normalized.txt" file
 * and "Reversed.txt" file.
 * Date: 10/08/2019
 ---------------------------------------------------------------------------- */
//Start your program.
#include <iostream>
#include <fstream>
#include <string>

int main()
{
  int size;
  double min=0, max=0;
  double* num;
  std::ofstream outfile, normalizedfile, reversedfile;
  std::string filename1, filename2, filename3;
  filename2 = "Normalized.txt";
  filename3 = "Reversed.txt";

  std::cout << "Enter a file name: ";
  std::cin >> filename1;
  outfile.open(filename1);

  outfile << "5\n10.0\n40.0\n20.0\n30.0\n50.0";

  outfile.close();

  std::ifstream infile;
  infile.open(filename1);
  if(infile.is_open())
  {
    infile >> size;
    num = new double[size];

    for(int i=0; i<size; i++)
    {
      infile >> num[i];
      if(i==0)
      {
        max = num[i];
        min = num[i];
      }
      else if(max<num[i])
      {
        max = num[i];
      }
      else if(min>num[i])
      {
        min = num[i];
      }
    }

    normalizedfile.open(filename2);
    normalizedfile << "Original array: [";
    for(int i=0; i<size; i++)
    {
      if(i != size-1)
      {
        normalizedfile << num[i] << ", ";
      }
      else
      {
        normalizedfile << num[i] << "]\n";
      }
    }
    normalizedfile << "Normalized array: [";
    for(int i=0; i<size; i++)
    {
      if(i != size-1)
      {
        normalizedfile << (num[i]-min)/(max-min) << ", ";
      }
      else
      {
        normalizedfile << (num[i]-min)/(max-min) << "]\n";
      }
    }
    normalizedfile.close();

    reversedfile.open(filename3);
    reversedfile << "Original array: [";
    for(int i=0; i<size; i++)
    {
      if(i != size-1)
      {
        reversedfile << num[i] << ", ";
      }
      else
      {
        reversedfile << num[i] << "]\n";
      }
    }
    reversedfile << "Reversed array: [";
    for(int i=size-1; i>=0; i--)
    {
      if(i != 0)
      {
        reversedfile << num[i] << ", ";
      }
      else
      {
        reversedfile << num[i] << "]\n";
      }
    }
    reversedfile.close();
  }
  else
  {
    std::cout << "File could not be opened.\n";
  }

  delete[]num;

  return(0);
}
