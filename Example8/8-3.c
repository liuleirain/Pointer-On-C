#include <stdio.h>
#define TRUE 1
#define FALSE 0

int identity_matrix(int matrix[][10]);

int main(void)
{
  int matrix[10][10] = 
  {
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 1, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 1, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 1, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 1, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 1, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 1, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 1, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 1, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
  };
  if(identity_matrix(matrix))
  {
    puts("Yes!!");
  }else
  {
    puts("No!!");
  }
  
  return 0;
}

int identity_matrix(int matrix[10][10])
{
  int row;
  int column;

  /*
  ** 通过矩阵的每个元素.
  */
  for(row = 0; row < 10; row += 1){
    for(column = 0; column < 10; column += 1){
      /*
      ** 如果行号等于列号，则值为1，否则为0
      */
      if(matrix[row][column] != (row == column)) return FALSE;
    }
  }
  return TRUE;
}