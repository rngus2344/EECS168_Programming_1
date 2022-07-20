/* -----------------------------------------------------------------------------
 * File Name:  main.cpp
 * Author: Guhyoun Nam
 * KUID: 2930128
 * Assignment: EECS-168 Lab8-exercise 2
 * Description: This program will take a single int at the command-line and
 * displays whether or not that integer is a palindrome.
 * Date: 10/29/2019
 ---------------------------------------------------------------------------- */
//Start your program.
#include <iostream>
int lastDigit(int n)
{
  int ans=0;
  ans = n%10;
  return(ans);
}

int removeLast(int n)
{
  int ans=0;
  ans = n/10;
  return(ans);
}

int reverse(int n)
{
  int temp=0, ans=0;
  do
  {
    temp=lastDigit(n);
    n=removeLast(n);
    ans=ans*10+temp;
  } while(n>0);
  {
    return(ans);
  }
}

bool isPalindrome(int n)
{
  if(n==reverse(n))
  {
    return(true);
  }
  else
  {
    return(false);
  }
}

int main(int argc, char* argv[])
{
  int x=0;
  std::string str = argv[1];
  x=std::stoi(str);

  if(isPalindrome(x) == 1)
  {
    std::cout << x << " is a Palindrome.\n";
  }
  else
  {
    std::cout << x << " is not a Palindrome.\n";
  }
  return(0);
}
