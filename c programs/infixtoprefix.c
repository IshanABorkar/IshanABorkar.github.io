#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100
struct stack
{
    int top;
    int st[MAX];
};
struct stack s;
void initialise();
void push(int);
int pop();
int isEmpty();
int isFull();
void display();
void conversion_infix_to_prefix(char[],char[],char[]);
int priority (char);


int main()
{
    char infix[MAX],postfix[MAX],prefix[MAX];
    initialise(&s);
    printf("enter the expression");
    fgets(infix,MAX,stdin);
    conversion_infix_to_prefix(infix,postfix,prefix);
}


void conversion_infix_to_prefix(char infix[],char postfix[],char prefix[])
{
    int i,j;
    char ele;
    for(i=0;i<strlen(infix);i++)
    {
        if(infix[i]=='(')
        {
            push(infix[i]);
        }
        else if (isalpha(infix[i]))
        {
            postfix[j]=infix[i];
            j++;       
        }
        else if(infix[i]=='*'||infix[i]=='+'||infix[i]=='-'||infix[i]=='/'||infix[i]=='%'||infix[i]=='$'||infix[i]=='^')
        {
            while(  !isEmpty() && priority(infix[i])<=priority(s.st[s.top]))
            {
                ele=pop();
                postfix[j]=ele;
                j++;
            }
            push(infix[i]);
        }
        else if(infix[i]==')')
        {
            while((ele=pop())!='(')
            {
                postfix[j]=ele;
                j++;
            }
        }
        
    }
  while(!isEmpty())
  {
    ele=pop();
    postfix[j]=ele;
    j++;
  }
  postfix[j]='\0';
  printf("\n postfix expression is %s \n ",postfix);
  i=0;
 for(j=strlen(postfix)-1;j>=0;j--)
 {
    prefix[i]=postfix[j];
    i++;
 }
 //prefix[i]='\0';
 printf(" prefix expression is %s ",prefix);
}
    
//function to initalise stack
void initialise()
{
    s.top=-1;
}


void push(int ele)
{
   if(isFull())
   {
    printf("stack is full");
   }
   else
   {
    s.top++;
    s.st[s.top]=ele;
   }
}
int pop()
{
    int ele;
    if(isEmpty())
    {
        printf("stack is empty");

    }
    else
    {
        ele=s.st[s.top];
        s.top--;
    }
    return ele;
}
int isEmpty()
{
    if(s.top==-1)
    {
      return 1;
    }
    else{
        return 0;
    }
}
int isFull()
{
    if(s.top==MAX-1)
    {
      return 1;
    }
    else{
        return 0;
    }
}
int priority(char ch)
{
	if(ch=='(')
	{
		return 1;
	}

	else if(ch=='+' || ch=='-')
	{
		return 2;
	}

	else if(ch=='*' || ch=='/' || ch=='%')
	{
		return 3;
	}

	else
	{
		return 4;
	}
}