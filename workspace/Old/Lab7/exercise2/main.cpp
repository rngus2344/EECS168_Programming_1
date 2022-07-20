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
#include <string>
using namespace std;

int lastDigit(int n)
{
  int ans;
  ans=n%10;
  return(ans);
}

int removeLast(int n)
{
  int ans;
  ans=n/10;
  return(ans);
}

int reverse(int n)
{
  int rev=0, rem;
  while(n!=0)
  {
    rem=n%10;
    rev=rev*10+rem;
    n=n/10;

  }
  return(rev);
}

bool isPalindrome(int n)
{
  if(n==reverse(n))
  {
    return true;
  }
  else
  {
    return false;
  }
}

int main(int argc, char* argv[])
{
  string s;
  s=argv[1];
  int n=stoi(s);

  cout << lastDigit(n) << ", " << removeLast(n) << ", " << reverse(n) << ", ";
  if(isPalindrome(n)==1)
  {
    cout << "It is a Palindrome. \n";
  }
  else
  {
    cout << "It is Not a Palindrome. \n";
  }

  return(0);
}
