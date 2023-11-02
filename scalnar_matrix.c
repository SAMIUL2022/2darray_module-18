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
int flag=1;

for (int i = 0; i < row; i++)
{
    for (int j= 0; j < col; j++)
    {
        if (i==j )
        {
            if (a[0][0]!=a[i][j])
            {
               flag=0;
            }
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
    printf("scalner matrix");
}
else 
{
    printf("not scalner matrix");
}





    return 0;
}