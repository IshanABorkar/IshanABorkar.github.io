#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};

void initialise(struct node*);
void push(int,struct node*);
int IsEmpty(struct node*);
void display(struct node*);
int main()
{
	int option,ele,option2;
	struct node *top1,*top2;
	initialise(top1);
	initialise(top2);

	do 
	{
		printf("\n enter choice \n 1. Push   \n 2. Pop   \n 3. Display \n ");
		scanf("%d",&option);
		switch(option)
		{
		case 1:
			printf("enter value to be pushed");
			scanf("%d",&ele);
			push(ele,top1);
			break;
		case 2:
		    ele=pop(top1);
			printf("\n element is %d",ele);
			break;
		case 3:
			display(top1);
			break;
		}
		printf("\n do you want to continue...1. yes   2. no:");
		scanf("%d",&option2);
	}while(option2==1);
return 0;	

}
void initialise(struct node*stack)
{
	stack=NULL;
}
void push(int ele,struct node*stack)
{
	struct node *newnode;
	newnode=(struct node * )malloc(1*sizeof(struct node));
	newnode->data=ele;
	if(IsEmpty(stack))
	{
		stack=newnode;
		stack->next=NULL; 
		printf("inside if %d",stack->data);

	}
	else
	{
		newnode->next=stack;
		stack=newnode;
		printf("inside else %d",stack->data);

	}
}	
int pop(struct node*stack)
{
	struct node *temp;
	int ele;
	if(IsEmpty(stack))
	{
		printf("stack is empty");
	}
	else
	{
		ele=stack->data;
		temp=stack;
		stack=stack->next;
		free(temp);
	}
	return ele;
}	

int IsEmpty(struct node*stack)
{
	printf("%d",stack);
	if(stack==NULL)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void display(struct node * stack)
{
	struct node*temp;
	if(IsEmpty(stack))
	{
		printf("\n stack empty");
	}
	else
	{
		temp=stack;
		printf("%d",temp);
		printf("\n nodes are:");
		while(temp!=NULL)
		{
			printf("%d",temp->data);
			temp=temp->next;
		}
	}
}


