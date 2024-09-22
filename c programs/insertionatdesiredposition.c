#include<stdio.h>
int main()
{
    int a[100],i,n,l,k;
    printf("\n enter how many values:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter values one by one");
        scanf("%d",&a[i]);
    }    

    printf("enter number to be inserted");
    scanf("\n %d",&k);

    printf("enter location where the number is to be inserted");
    scanf("\n %d",&l);
    for(i=n-1;i>=l-1;i--)
    {
        a[i+1]=a[i];
    
    }   
    n++;
    a[l-1]=k; 
    
    for(i=0;i<n;i++)
    {
        printf("\n %d", a[i]);
    }    
}










































































