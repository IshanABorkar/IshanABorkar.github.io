
#include<stdio.h>

void add_sparx(int [][3],int [][3],int,int);

int main()
{
    int a1[100][100],a2[100][100],s1[100][3],s2[100][3],i,j,m,n,cnt1=0,cnt2=0,rows,cols,k=0;
    printf("enter number of rows and colums of first matrix:");
    scanf("%d%d",&rows,&cols);
    printf("enter the matrix values of first matrix:");

    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            scanf("%d",&a1[i][j]);
            if(a1[i][j]!=0)
            {
                cnt1++;
            }
        }
    }    
    cnt2=0;
    printf("enter the matrix values of second matrix:");

    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            scanf("%d",&a2[i][j]);
            if(a2[i][j]!=0)
            {
                cnt2++;
            }
        } 

    }    
  //printf("cnt2 is %d\n",cnt2);
    s1[0][0]=rows;
	s1[0][1]=cols;
	s1[0][2]=cnt1;

	s2[0][0]=rows;
	s2[0][1]=cols;
	s2[0][2]=cnt2;
	
	
    k=1;      
    for(i=0;i<rows;i++)
    {
    for(j=0;j<cols;j++)
    {
        if(a1[i][j]!=0)
        {
            s1[k][0]=i;
            s1[k][1]=j;
            s1[k][2]=a1[i][j];
            k++;
        }
    }
    }
    printf("sparx matrix 1 \n ");
    for(i=0;i<=cnt1;i++)
    {
      printf("%d %d  %d \n ",s1[i][0],s1[i][1],s1[i][2]);

    }
    k=1;
    for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			if(a2[i][j]!=0)
			{
				s2[k][0]=i;
				s2[k][1]=j;
				s2[k][2]=a2[i][j];
				k++;
			}
		}
        
    } 
    printf("sparx marix 2\n ");
    for(i=0;i<=cnt2;i++)
    {
    printf("%d %d  %d \n ",s2[i][0],s2[i][1],s2[i][2]);
    }
    add_sparx(s1,s2,cnt1,cnt2);
    return 0;
}
void add_sparx(int s1[][3],int s2[][3],int cnt1,int cnt2)
{
    int i=1,j=1,k=1,s3[100][3];
    s3[0][0]=s1[0][0];
	s3[0][1]=s1[0][1];
    

    while(i<=cnt1 && j<=cnt2)
    {
        if(s1[i][0]<s2[j][0])
        {
            s3[k][0]=s1[i][0];
            s3[k][1]=s1[i][1];
            s3[k][2]=s1[i][2];
            i++;
            k++;
        }
        else if(s2[j][0]<s1[i][0])
        {
            s3[k][0]=s2[j][0];
            s3[k][1]=s2[j][1];
            s3[k][2]=s2[j][2];
            k++;
            j++;
        }
        else if(s1[i][1]<s2[j][1])
        {
            s3[k][0]=s1[i][0];
            s3[k][1]=s1[i][1];
            s3[k][2]=s1[i][2];
            i++;
            k++;
        }
        else if(s2[j][1]<s1[i][1])
		{
			s3[k][0]=s2[j][0];
			s3[k][1]=s2[j][1];
			s3[k][2]=s2[j][2];
			j++;
			k++;
		}
        else
        {
            s3[k][0]=s1[i][0];
			s3[k][1]=s1[i][1];
			s3[k][2]=s1[i][2]+s2[j][2];
			i++;
			j++;
			k++;
		}
        }
       
    while(i<=cnt1)
	{
		s3[k][0]=s1[i][0];
		s3[k][1]=s1[i][1];
		s3[k][2]=s1[i][2];

		i++;
		k++;	
	}
	
	while(j<=cnt2)
	{
		s3[k][0]=s2[j][0];
		s3[k][1]=s2[j][1];
		s3[k][2]=s2[j][2];

		j++;
		k++;	
	}

     s3[0][2]=k;
        printf("\n sparx matrix 3:\n");
        for(i=0;i<k;i++)
	{
		printf("%d %d %d\n ",s3[i][0],s3[i][1],s3[i][2]);
	}



}

  