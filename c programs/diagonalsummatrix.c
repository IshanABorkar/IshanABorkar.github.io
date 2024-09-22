#include <stdio.h>

int main()
{
    int i,j,a[100][100],rows,cols,sum=0;
    printf("enter number of rows and colums:");
    scanf("%d %d",&rows,&cols);
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
            if(a[i]==a[j])
            {
                sum=sum+a[i][j];
            }
        }
    }    
    printf("%d",sum);
    return 0;
}
