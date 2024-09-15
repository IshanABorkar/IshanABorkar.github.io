#include<stdio.h>
void linear_search(int[],int);
int main()
{
    int  n,i;
    int  a[100];
    printf("enter no of values:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter values one by one");
        scanf("%d",&a[i]);
    }    
    linear_search(a,n); 
    return 0;
}
void linear_search(int b[],int n1)
{
	int i,ele,flag=0;

	printf("\n enter value to be searched:");
	scanf("%d",&ele);

	for(i=0;i<n1;i++)
	{
		if(b[i]==ele)
		{
			printf("\n the element is found at index %d",i);
			flag=1;
			break;
		}
	}

	if(flag==0)
	{
		printf("\n element not found");
	}

}



































    
    






