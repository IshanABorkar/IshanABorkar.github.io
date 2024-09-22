#include <stdio.h>

int main()
{
    int rows,cols,i,j,a[100][100],b[100][100],cnt=0,p=0;
    printf("enter number of rows and colums:");
    scanf("%d%d",&rows,&cols);
    printf("enter the matrix values:");

    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            scanf("%d",&a[i][j]);
        }    
    }
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            b[j][i]=a[i][j];
        } 
    }
    printf("transpose is:\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            printf("%d\t",b[i][j]);
        }
    printf("\n");    
   
    }   
    return 0;
}    

     
