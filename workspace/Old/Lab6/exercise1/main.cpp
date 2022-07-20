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
  std::cout << "Input a name for the file. \n";
  std::cin >> name;

  std::ofstream myOutFile1;
  std::string fileName1 = name;
  myOutFile1.open(fileName1); //You can pass in strings if you want

  //Put some stuff in the file
  myOutFile1 << "4 4\n1.0 2.0 3.0 4.0\n5.0 6.0 7.0 8.0\n9.0 10.0 11.0 12.0\n13.0 14.0 15.0 16.0";

  myOutFile1.close(); //VERY important to do with output files

  std::ifstream inFile;
  inFile.open(name);
  int a=0;
  int b=0;

  if(inFile.is_open())
  {
    inFile >> a >> b;
    double** nums=nullptr;
    nums=new double*[a];
    for(int i=1; i<a+1; i++)
    {
      nums[i]=new double[b];
      for(int j=1; j<b+1; j++)
      {
        inFile >> nums[i][j];
      }
    }


    std::ofstream myOutFile2;
    std::string fileName2 = "averages.txt";
    myOutFile2.open(fileName2);

    double tot=0;
    double totaverage=0;
    for(int i=1; i<a+1; i++)
    {
      for(int j=1; j<b+1; j++)
      {
        tot=tot+nums[i][j];
      }
    }
    totaverage=tot/(a*b);

    myOutFile2 << "Total average: " << totaverage;
    for(int i=1; i<a+1; i++)
    {
      
    }
    myOutFile2.close();


    std::ofstream myOutFile3;
    std::string fileName3 = "reverse.txt";
    myOutFile3.open(fileName3);

    myOutFile3.close();


    std::ofstream myOutFile4;
    std::string fileName4 = "flipped.txt";
    myOutFile4.open(fileName4);

    myOutFile4.close();
  }



  return(0);
}
