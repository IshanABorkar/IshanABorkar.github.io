#include <stdio.h>
void fast_transpose(int [][3],int cols);

int main()
{
    int rows,cols,i,j,a[100][100],s[100][3],cnt=0,p=0,t;
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
    t=cnt;

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
fast_transpose(s,cols);
return 0;
}

void fast_transpose(int s[100][3],int cols)
{
    int i,j,t,s1[100][3],n;
	int total[10],index[10],rowindex,col;
    t=s[0][2];
    s1[0][0]=s[0][1];
    s1[0][1]=s[0][0];
    s1[0][2]=s[0][2];

    for(i=0;i<cols;i++)
	{	
		total[i]=0;
	}
    //printf("%d %d %d ",total[0],total[1],total[2]);
    for(i=1;i<=t;i++)
	{
		col=s[i][1];
		total[col]++;
	}
    //printf("\n %d %d %d ",total[0],total[1],total[2]);
    index[0]=1;
	for(i=1;i<cols;i++)
	{
		index[i]=index[i-1]+total[i-1];
	}
     //printf("\n %d %d %d ",index[0],index[1],index[2]);

    for(i=1;i<=t;i++)
	{
		j=s[i][1];
		rowindex=index[j];
        index[j]++;
        s1[rowindex][0]=s[i][1];
		s1[rowindex][1]=s[i][0];
		s1[rowindex][2]=s[i][2];
	}
    printf("\n fast transpose is:");
	for(i=0;i<=t;i++)
	{
		printf("\n %d %d %d",s1[i][0],s1[i][1],s1[i][2]);
	}
    
}












