#include<stdio.h>
struct Student
{
	char name[100];
	int rno;
	float per;
};
void insertion_sort(struct Student [],int);
void bubble_sort(struct Student [],int);
void selection_sort(struct Student [],int);

int main()
{
	struct Student arr[100];
	int n,i,option;

	printf("\n enter how many students:");
	scanf("%d",&n);

	printf("\n enter details of students:");
	for(i=0;i<n;i++)
	{
		printf("\n enter name:");
		fflush(stdin);
		gets(arr[i].name);

		printf("\n enter rollno:");
		scanf("%d",&arr[i].rno);

		printf("\n enter percentage:");
		scanf("%f",&arr[i].per);
	}

	printf("\n enter choice....1. selection sort    2. bubble sort    3. insertion sort:");
	scanf("%d",&option);
	switch(option)
	{
		case 1: selection_sort(arr,n);
			break;

		case 2: bubble_sort(arr,n);
			break;

		case 3: insertion_sort(arr,n);
			break;

		default:printf("\n invalid choice");
	}
	return 0;
}
void selection_sort(struct Student arr[],int n)
{
	int i,j;
	struct Student temp;

	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i].rno>arr[j].rno)
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
			//swapping values of arr[i] and arr[j], 
//if arr[i].rno>arr[j].rno
			
		}
	}

	printf("\n after sorting, student details are:");
	for(i=0;i<n;i++)
	{
		printf("\n student name is %s,student rollno is %d,student percentage is %f",arr[i].name,arr[i].rno,arr[i].per);
	}
}
void bubble_sort(struct Student arr[],int n)
{
	int i,j;
	struct Student temp;

	for(i=0;i<n;i++)
	{
		for(j=0;j<n-(i+1);j++)
		{
			if(arr[j].rno>arr[j+1].rno)
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}