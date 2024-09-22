#include<stdio.h>
void bubble_sort(int [],int);
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

    bubble_sort(a,n);
   
    
    return 0;
}
void bubble_sort(int a[],int n)
{
    int i ,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-(i+1);j++)
        {
            if(a[j+1]<a[j])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;

            }
        }
    }
 printf("\n elements in sorted order are:");
	for(i=0;i<n;i++)
	{
		printf("\n %d ",a[i]);
	}
}
