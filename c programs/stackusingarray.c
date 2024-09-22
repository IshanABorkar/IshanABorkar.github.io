#include<stdio.h>
#define MAX 100
struct stack
{
    int st[MAX];
    int top;
};
void initialise(struct stack *);
void push(struct stack *,int ele);
int pop(struct stack *);
int isFull(struct stack *);
int isEmpty(struct stack *);
void display(struct stack *);

int main()
{
    struct stack s;
    int option,ele;
    initialise(&s);

do
{
    printf("\n enter choice...1. push    2. pop     3. display    4. check for full     5. check for empty:");
		scanf("%d",&option);
		switch(option)
		{
			case 1:printf("\n enter value to be pushed:");
				scanf("%d",&ele);
				push(&s,ele);
				break;

			case 2:ele=pop(&s);
				printf("\n element popped is %d",ele);
				break;

			case 3:display(&s);
				break;

			case 4: if(isFull(&s))
				{
					printf("\n stack full");
				}

				else
				{
					printf("\n stack not full");
				}
				break;

			case 5: if(isEmpty(&s))
				{
					printf("\n stack empty");
				}

				else
				{
					printf("\n stack not empty");
				}
				break;

			default:printf("\n invalid choice");

		}
		printf("\n do you want to continue...1. yes   2. no:");
		scanf("%d" ,&option);
	}while(option==1);
	return 0;
}
void initialise(struct stack *s1)
{
    s1->top=-1;
}
void push(struct stack *s1,int ele)
{
    if(isFull(&s1))
    {
        printf("stack is full");
    }
    else
    {
        s1->top++;
        s1->st[s1->top]=ele;
    }
}
int pop(struct stack *s1)
{
    int ele1;
    if(isEmpty(&s1))
    {
        printf("stack is empty");
    }
    else
    {
        ele1=s1->st[s1->top];
        s1->top--;
    }
    return ele1;
}
int isEmpty(struct stack *s1)
{
    if(s1->top==-1)
    {
        return 1;
    }
    else{
        return 0;
    }
}
int isFull(struct stack *s1)
{
    if(s1->top==MAX-1)
    {
        return 1;
    }
    else{
        return 0;
    }
}
void display(struct stack *s1)
{
    int i;
    for(i=0;i<=s1->top;i++)
    {
        printf(" %d ", s1->st[i]);
    }
}






    









 


