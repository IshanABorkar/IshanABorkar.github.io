#include<stdio.h>
void binary_search(int [],int,int,int,int);
int main()
{
	int arr[100];
	int i,j,n,temp,ele,low,high,mid;

	printf("\n enter how many nos to be stored in array:");
	scanf("%d",&n);

	printf("\n enter values one by one:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}

	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}	
		}
	}
	
	printf("\n enter which element to be searched:");
	scanf("%d",&ele);

	low=0;
	high=n-1;
	mid=(low+high)/2;

	binary_search(arr,low,high,mid,ele);

	return 0;

}

void binary_search(int arr[],int low,int high,int mid,int ele)
{
	while(low<=high)
	{
		if(arr[mid]>ele)
		{
			high=mid-1;
			mid=(low+high)/2;
		}

		else if(arr[mid]<ele)		
		{
			low=mid+1;
			mid=(low+high)/2;
		}

		else
		{
			printf("\n element found");
			break;
		}

	}

	if(low>high)
	{
		printf("\n not found");
	}
} 