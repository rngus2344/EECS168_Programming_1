/* -----------------------------------------------------------------------------
 * File Name:  main.cpp
 * Author: Guhyoun Nam
 * KUID: 2930128
 * Assignment: EECS-168 Lab8-exercise 1
 * Description: This program will take two numbers from the command-line and
 * print the sum of all values from one to the other.
 * Date: 10/29/2019
 ---------------------------------------------------------------------------- */
//Start your program.
#include <iostream>

int smaller(int n1, int n2)
{
  int ans=0;
  ans=n1;
  if(n1>n2)
  {
    ans=n2;
  }
  return(ans);
}

int larger(int n1, int n2)
{
  int ans=0;
  ans=n1;
  if(n1<n2)
  {
    ans=n2;
  }
  return(ans);
}

int sum(int n1, int n2)
{
  int ans=0;
  for(int i=smaller(n1,n2); i<=larger(n1,n2); i++)
  {
    ans=ans+i;
  }
  return(ans);
}

int main(int argc, char* argv[])
{
  int x=0, y=0;
  std::string str1 = argv[1];
  std::string str2 = argv[2];
  x=std::stoi(str1);
  y=std::stoi(str2);

  std::cout << "Summation from " << smaller(x,y) << " to " << larger(x,y) << ": ";
  std::cout << sum(x,y) << '\n';
  return(0);
}
