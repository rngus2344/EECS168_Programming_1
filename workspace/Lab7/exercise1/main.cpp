/* -----------------------------------------------------------------------------
 * File Name:  main.cpp
 * Author: Guhyoun Nam
 * KUID: 2930128
 * Assignment: EECS-168 Lab 7
 * Description: This program will let the user to choose an option; count digit,
 * sum digit, and reverse of a number, tell the user if the number is Palindrome.
 * Date: 10/22/2019
 ---------------------------------------------------------------------------- */
//Start your program.
#include <iostream>

int lastDigit(int n)
{
  int ans=0;
  ans = n%10;
  return(ans);
}

int removeLastDigit(int n)
{
  int ans=0;
  ans = n/10;
  return(ans);
}

int addDigit(int currentNum, int newDigit)
{
  int ans=0;
  ans = currentNum*10+newDigit;
  return(ans);
}

int reverse(int n)
{
  int temp=0, ans=0;
  do
  {
    temp=lastDigit(n);
    n=removeLastDigit(n);
    ans=addDigit(ans,temp);
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
//returns true if n is a palindrome
//example isPalindrome(12321) returns true, but isPalindrome(123) returns false
//This should use reverse

int countDigits(int n)
{
  int ans=0;
  do
  {
    n=removeLastDigit(n);
    ans++;
  } while(n != 0);
  {
    return(ans);
  }
}

int sumDigits(int n)
{
  int ans=0;
  do
  {
    ans=ans+lastDigit(n);
    n=removeLastDigit(n);
  } while(n>0);
  {
    return(ans);
  }
}

void printMenu()
{
  std::cout << "1) Count digits\n2) Sum digits\n3) Is Palindrome\n4) Reverse\n5) Exit\nChoice: ";
}

void run()
{
  int choice, num;
  printMenu();
  std::cin >> choice;

  do
  {
    if(choice==1)
    {
      std::cout << "Input a number: ";
      std::cin >> num;
      std::cout << countDigits(num);
    }
    else if(choice==2)
    {
      std::cout << "Input a number: ";
      std::cin >> num;
      std::cout << sumDigits(num);
    }
    else if(choice==3)
    {
      std::cout << "Input a number: ";
      std::cin >> num;
      std::cout << isPalindrome(num);
    }
    else if(choice==4)
    {
      std::cout << "Input a number: ";
      std::cin >> num;
      std::cout << reverse(num);
    }
    else if(choice != 5)
    {
      std::cout << "Wrong input, Try again.";
    }
    std::cout << "\n\n";
    printMenu();
    std::cin >> choice;
  } while(choice != 5);
  {
    std::cout << "Goodbye. \n";
  }
}

int main()
{
  run();
  return(0);
}
