/* -----------------------------------------------------------------------------
 *
 * File Name:  main.cpp
 * Author: Guhyoun Nam
 * Assignment: EECS-168 Lab 7
 * Description: This program will take a single int at the command-line and
 display whether or not that integer is a palindrome. A palindrome a sequence
 that is the same forwards and backwards.
 * Date: 4/4/2019
 *
 ---------------------------------------------------------------------------- */
//Start your program.
#include <iostream>
using namespace std;


int lastDigit(int num1, int num2);
int removeLast(int num1, int num2);
int reverse(int num1, int num2);
bool isPalindrome(int n)


int main(int argc, char* argv[])
{

/*  string s1, s2;
  s1=argv[1];
  s2=argv[2];
  int num1=stoi(s1);
  int num2=stoi(s2);
  int small=smaller(num1,num2);
  int large=larger(num1, num2);
  int sumn=sum(num1, num2);

  cout << "Summation from " << small << " to " << large << ": " << sumn << '\n';

  return(0);
}

int smaller(int num1, int num2)
{
  int ans=0;
  if(num1<=num2)
  {
    ans=num1;
  }
  else
  {
    ans=num2;
  }
  return(ans);
}

int larger(int num1, int num2)
{
  int ans=0;
  if(num1>=num2)
  {
    ans=num1;
  }
  else
  {
    ans=num2;
  }
  return(ans);;
}

int sum(int num1, int num2)
{
  int ans=0;
  for(int i=smaller(num1, num2); i<larger(num1, num2)+1; i++)
  {
    ans=ans+i;
  }
  return(ans);
}
