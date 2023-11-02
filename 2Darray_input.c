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
for (int i = row-1; i >= 0; i--)
{
    for (int j= col-1; j >= 0; j--)
    {
        printf("%d ",a[i][j]);
    }
    printf("\n");
}



    return 0;
}