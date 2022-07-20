/* -----------------------------------------------------------------------------
 *
 * File Name:  main.cpp
 * Author: Guhyoun Nam
 * Assignment: EECS-168 Lab 7
 * Description: This program will input two numbers from the command-line and
 display the sum of all values from one to the other (inclusive).
 * Date: 4/4/2019
 *
 ---------------------------------------------------------------------------- */
//Start your program.
#include <iostream>
using namespace std;

int smaller(int n1, int n2)
{
  int ans=0;
  if(n1<=n2)
  {
    ans=n1;
  }
  else
  {
    ans=n2;
  }
  return(ans);
}

int larger(int n1, int n2)
{
  int ans=0;
  if(n1>=n2)
  {
    ans=n1;
  }
  else
  {
    ans=n2;
  }
  return(ans);;
}

int sum(int n1, int n2)
{
  int ans=0;
  for(int i=smaller(n1, n2); i<larger(n1, n2)+1; i++)
  {
    ans=ans+i;
  }
  return(ans);
}

int main(int argc, char* argv[])
{
  string s1, s2;
  s1=argv[1];
  s2=argv[2];
  int n1=stoi(s1);
  int n2=stoi(s2);
  int small=smaller(n1, n2);
  int large=larger(n1, n2);
  int sumn=sum(n1, n2);

  cout << "Summation from " << small << " to " << large << ": " << sumn << '\n';

  return(0);
}
