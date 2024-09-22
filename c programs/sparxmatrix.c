#include <stdio.h>

int main()
{
    int rows,cols,i,j,a[100][100],s[100][3],cnt=0,p=0;
    printf("enter number of rows and colums:");
    scanf("%d%d",&rows,&cols);
    printf("enter the matrix values:");

    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            scanf("%d",&a[i][j]);
            if(a[i][j]!=0)
            {
                cnt++;
            }
        }
    }
    s[0][0]=rows;
    s[0][1]=cols;
    s[0][2]=cnt;
    printf("\n %d",s[0][0]);
    p=1;

for(i=0;i<rows;i++)
{
    for(j=0;j<cols;j++)
    {
        if(a[i][j]!=0)
        {
            s[p][0]=i;
            s[p][1]=j;
            s[p][2]=a[i][j];
            p++;
        }
    }
}
printf(" sparse matrix is \n ");
for(i=0;i<=cnt;i++)
{

    printf("%d %d  %d \n ",s[i][0],s[i][1],s[i][2]);
}
return 0;

}

