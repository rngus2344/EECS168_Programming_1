/* -----------------------------------------------------------------------------
 *
 * File Name:  main.cpp
 * Author: Guhyoun Nam
 * Assignment: EECS-168 Lab 8
 * Description: This program will take in a board with chess pieces from file.
 For this exercise, the board will only contain pawns and rooks. The dimensions
 of the board will be some MxN dimensions where both M and N are greater than 1.
 The only input this program obtains from the user will that of a file name
 containing the board information.
 Given a board, it will mark all pawns that can be attacked by a rook. Recall,
 a rook can move horizontally or vertically through empty spaces until it
 reaches an end of the board or another piece.
 (My job is to read in the file, find all the pawns that can be attacked, and
 print an updated board to the screen.)
 * Date: 4/11/2019
 *
 ---------------------------------------------------------------------------- */
//Start your program.
#include <fstream>
#include <iostream>

int main()
{
  std::ifstream inFile;
  inFile.open("sample.txt");
  int row=0;
  int col=0;

  if(inFile.is_open())
  {
    inFile >> row >> col;
    char** board=nullptr;
    board=new char*[row];
    for(int i=0; i<row; i++)
    {
      board[i]=new char[col];
      for(int j=0; j<col; j++)
      {
        inFile >> board[i][j];
      }
    }

    int x, y;

    for(int i=0; i<row; i++)
    {
      for(int j=0; j<col; j++)
      {
        if(board[i][j]=='R')
        {
          x=i;
          y=j;

          for(int k=x;k>=0;k--)
          {
            if(board[k][y]=='P')
            {
              board[k][y]='!';
              break;
            }
          }

          for(int k=y;k>=0;k--)
          {
            if(board[x][k]=='P')
            {
              board[x][k]='!';
              break;
            }
          }

          for(int k=y;k<col;k++){
            if(board[x][k]=='P')
            {
              board[x][k]='!';
              break;
            }
          }

          for(int k=x;k<row;k++)
          {
            if(board[k][y]=='P')
            {
              board[k][y]='!';
              break;
            }
          }
          break;
        }
      }
    }

    for(int i=0; i<row; i++)
    {
      for(int j=0; j<col; j++)
      {
        std::cout<<board[i][j];
      }
      std::cout<<"\n";
    }
  }
  return(0);
}
