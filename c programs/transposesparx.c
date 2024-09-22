#include <stdio.h>
void simple_transpose(int [][3],int,int);

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
simple_transpose(s,cols,cnt);
return 0;

}
void simple_transpose(int s[][3],int cols,int rows )
{
    int s1[100][3],i,k,p=1;
    s1[0][1]=s[0][0];
    s1[0][0]=s[0][1];
    s1[0][2]=s[0][2];

    for(i=0;i<cols;i++)
    {
        for(k=1;k<=rows;k++)
      {
        if(i==s[k][1])
        {
            s1[p][0]=s[k][1];
			s1[p][1]=s[k][0];
			s1[p][2]=s[k][2];
			p++;
        }
      }
    }

printf("\n the transpose matrix is:");    
for(i=0;i<=rows;i++)
	{
		printf("\n %d %d %d",s1[i][0],s1[i][1],s1[i][2]);
	}
}



