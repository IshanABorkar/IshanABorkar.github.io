#include<stdio.h>
void insertion_sort(int [],int);
int main()
{
    int a[100],n,i;
    printf("\n enter how many values:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter values one by one");
        scanf("%d",&a[i]);
    }    

    insertion_sort(a,n);
   
    
    return 0;
}
void insertion_sort(int a[],int n)
{
    int i,j,key;
    for(i=1;i<n;i++)
    {
        key=a[i];
        j=i-1;
    
        while(j>=0 && key<a[j])
        {
            a[j+1]=a[j];
            j=j-1;

        }
        a[j+1]=key;
    }
 
     printf("\n elements in sorted order are:");
	for(i=0;i<n;i++)
	{
		printf("\n %d ",a[i]);
	}

    
}







