#include <stdio.h>
int main ()
{
int row,col;
scanf("%d %d",&row,&col);
int a[row][col];
for (int i = 0; i < row; i++)
{
    for (int j= 0; j < col; j++)
    {
        scanf("%d",&a[i][j]);
    }
    
}

if (row!=col)
{
     printf(" not Diagonal matrix");
}

int flag=1;
for (int i = 0; i < row; i++)
{
    for (int j= 0; j < col; j++)
    {
      if (i==j)
      {
        continue;
      }
      if (a[i][j]!=0)
      {
        flag=0;
      }
      
      
    }
    
}
if (flag==1)
{
    printf("Diagonal matrix");
}
else
{
    printf(" not Diagonal matrix");
}





    return 0;
}