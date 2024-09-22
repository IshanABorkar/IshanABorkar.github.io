#include<stdio.h>


void multiply(int [100][100],int [100][100],int,int,int);

int main()
{
	int a[100][100],b[100][100],i,j,rows1,cols1,rows2,cols2;

	printf("enter rows and columns in 1st matrix:");
	scanf("%d%d",&rows1,&cols1);

	printf("enter rows and columns in 2nd matrix:");
	scanf("%d%d",&rows2,&cols2);


	if(cols1==rows2)
	{
		printf("\n enter values in 1st matrix:");
		for(i=0;i<rows1;i++)
		{
			for(j=0;j<cols1;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}

		printf("\n enter values in 2nd matrix:");
		for(i=0;i<rows2;i++)
		{
			for(j=0;j<cols2;j++)
			{
				scanf("%d",&b[i][j]);
			}
		}

		multiply(a,b,rows1,cols2,cols1);

	}
	return 0;
}
void multiply(int a[100][100],int b[100][100],int rows1,int cols2,int cols1)
{
    int i,j,c[100][100],sum=0,result,k;
	printf("\n The multiplication is:\n");
	for(i=0;i<rows1;i++)
    {
	for(j=0;j<cols2;j++)
    {
		sum=0;
		for(k=0;k<cols1;k++)
		{
			result=a[i][k]*b[k][j];
			sum=sum+result;
		}
		c[i][j]=sum;
		printf("%d \t ",c[i][j]);
	}	
    	printf("\n");
    }
}

