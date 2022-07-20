/* -----------------------------------------------------------------------------
 * File Name:  main.cpp
 * Author: Guhyoun Nam
 * KUID: 2930128
 * Assignment: EECS-168 Lab8-exercise 3
 * Description: This program will allow the user to manipulate an array.
 * Date: 10/29/2019
 ---------------------------------------------------------------------------- */
//Start your program.
#include <iostream>

int* insert(int arr[], int& size, int value, int position)
{
  int* newArr = new int [size+1];
  newArr[position] = value;
  for(int i=0; i<(size+1); i++)
  {
    if(i<position)
    {
      newArr[i] = arr[i];
    }
    else if(i>position)
    {
      newArr[i] = arr[i-1];
    }
  }
  size++;
  delete[] arr;
  return(newArr);
}
/* Inserts the given value at the specified position
Creates a new array, copies all old value over adjusting indices as necessary
Deletes the old array (arr)
Updates the size
Returns a pointer to the new array */

int* remove(int arr[], int& size, int position)
{
  int* newArr = new int [size-1];
  for(int i=0; i<(size-1); i++)
  {
    if(i<position)
    {
      newArr[i]=arr[i];
    }
    else
    {
      newArr[i]=arr[i-1];
    }
  }
  size--;
  delete[] arr;
  return(newArr);
}
/* Removes the value at the given position
Creates a new array, copies all old value over adjusting indices as necessary
Deletes the old array (arr)
Updates the size
Returns a pointer to the new array */

int count(int arr[ ], int size, int target)
{
  int targetcount=0;
  for(int i=0; i<size; i++)
  {
    if(arr[i]==target)
    {
      targetcount++;
    }
  }
  return(targetcount);
}
// returns a count of how many times the target value is in the array

void print(int arr[ ], int size)
{
  std::cout << '[';
  for(int i=0; i<size; i++)
  {
    if(i<(size-1))
    {
      std::cout << arr[i] << ", ";
    }
    else
    {
      std::cout << arr[i];
    }
  }
  std::cout << "]\n";
}
// Prints array as required

int main()
{
  int size, value, choice;

  std::cout << "Enter a size for the array: ";
  std::cin >> size;

  int* nums = new int[size];

  std::cout << "Enter values to fill the array: ";
  for(int i=0; i<size; i++)
  {
    std::cin >> value;
    nums[i]=value;
  }
  do
  {
    int userValue, userPosition, targetValue;
    std::cout << "Make a selection: \n1) Insert \n2) Remove \n3) Count \n4) Print \n5) Exit \nChoice: ";
    std::cin >> choice;
    if(choice == 1)
    {
      std::cout << "Enter a value to input: ";
      std::cin >> userValue;
      std::cout << "Enter a position to input: ";
      std::cin >> userPosition;
      do
      {
        if(userPosition<0 || userPosition>size)
        {
          std::cout << "Invalid position. Enter a valid position to input: ";
          std::cin >> userPosition;
        }
      } while(userPosition<0 || userPosition>size);
      {
        nums = insert(nums, size, userValue, userPosition);
      }
    }
    else if(choice == 2)
    {
      std::cout << "Enter a position to remove: ";
      std::cin >> userPosition;
      do
      {
        if(userPosition<0 || userPosition>=size)
        {
          std::cout << "Invalid position. Enter a valid position to input: ";
          std::cin >> userPosition;
        }
      } while(userPosition<0 || userPosition>=size);
      {
        nums=remove(nums, size, userPosition);
      }
    }
    else if(choice == 3)
    {
      std::cout << "Enter a target value to count: ";
      std::cin >> targetValue;
      std::cout << "The target value " << targetValue << " shows up " << count(nums, size, targetValue) << " time(s) in the array.\n";
    }
    else if(choice == 4)
    {
      print(nums, size);
    }
  } while(choice != 5);
  {
    std::cout << "Exit program.\n";
  }
  delete[] nums;
  return(0);
}
