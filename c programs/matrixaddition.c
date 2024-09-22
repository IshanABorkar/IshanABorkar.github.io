#include <stdio.h>

int main()
{
    int i,j,a[100][100],b[100][100],c[100][100],rows,cols;
    printf("enter number of rows and colums:");
    scanf("%d %d",&rows,&cols);

    printf("enter the matrix values in first matrix:");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }   
    printf("enter the matrix values in second matrix:");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }   
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }    

    printf("sum of matrices is:\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            printf("%d\t",c[i][j]);
        }
    printf("\n");    
   
    }   
     return 0;  
}



    






