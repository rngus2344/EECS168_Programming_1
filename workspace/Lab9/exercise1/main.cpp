/* -----------------------------------------------------------------------------
 * File Name:  main.cpp
 * Author: Guhyoun Nam
 * KUID: 2930128
 * Assignment: EECS-168 Lab9-exercise 1
 * Description: This program will take a file name from the command line and
 * count the number of "crosses" in the file.
 * Date: 11/05/2019
 ---------------------------------------------------------------------------- */
//Start your program.
#include <iostream>
#include <fstream>

int main(int argc, char* argv[])
{
  int row=0, col=0, num=0;

  std::string fileName = argv[1];
  std::ifstream inFile;
  inFile.open(fileName);

  if(inFile.is_open())
  {
    inFile >> row;
    inFile >> col;

    char** board = new char*[row];
    for(int i=0; i<row; i++)
    {
      board[i] = new char[col];
    }
    for(int i=0; i<row; i++)
    {
      for(int j=0; j<col; j++)
      {
        inFile >> board[i][j];
      }
    }

    for(int k=1; k<row-1; k++)
    {
      for(int l=1; l<col-1; l++)
      {
        if(board[k][l]=='+' && board[k-1][l]=='+' && board[k+1][l]=='+' && board[k][l-1]=='+' && board[k][l+1]=='+')
        {
          num++;
          board[k][l]='p';
          board[k-1][l]='-';
          board[k+1][l]='-';
          board[k][l-1]='-';
          board[k][l+1]='-';
        }
      }
    }

    std::cout << fileName << " contains " << num << " crosses. \n";
    std::cout << "Location(s) of center(s): " << '\n';
    for(int i=0; i<row; i++)
    {
      for(int j=0; j<col; j++)
      {
        if(board[i][j]=='p')
        {
          std::cout << '(' << i << ',' << j << ')' << '\n';
        }
      }
    }

    for(int i=0; i<row; i++)
    {
      delete[] board[i];
    }
    delete[] board;

    inFile.close();
  }
  else
  {
    std::cout << "File could not be opened.\n";
  }
  return(0);
}
