#include<stdio.h>
#include<string.h>
#include <ctype.h>
#define MAX 100
struct stack
{
    char st[MAX][MAX];
    int top;
};
struct stack s;
void initialise();
void push(char[]);
void pop(char[]);
int isEmpty();
int isFull();
void display();
void conversion_prefix_to_infix(char[],char[]);

int main()
{
    char prefix[MAX],infix[MAX];
    initialise();
    printf("enter the prefix expression:");
    fgets(prefix,MAX,stdin);
    conversion_prefix_to_infix(prefix,infix);
}
void initialise()
{
    s.top=-1;
}
void conversion_prefix_to_infix(char prefix[],char infix[])
{
    int i,ele;
    char temp[MAX],op1[MAX],op2[MAX],result[MAX];
    for(i=strlen(prefix)-1;i>=0;i--)
    {
        if(isalpha(prefix[i]))
        {
            temp[0]=prefix[i];
            temp[1]='\0';
            //printf("temp -%s\n",temp);
            //printf("top is%d",s.top);

            push(temp);
        }
        else if(prefix[i] =='+'||prefix[i] =='-'||prefix[i] =='*'||prefix[i] =='/'||prefix[i] =='%'||prefix[i] =='^')
        {
            pop(op2);
            pop(op1);
            strcpy(result,"(");
            strcat(result,op1);
            temp[0]=prefix[i];
            temp[1]='\0';
            strcat(result,temp);
            strcat(result,op2);
            strcat(result,")");
            push(result);
        }
       
    }
    pop(result);
    printf("\n infix expression is %s",result);
}
void push(char ele[])
{
    if(isFull())
    {
        printf("stack is full");
    }
    else
    {
        s.top++;
        strcpy(s.st[s.top],ele);
    }
}
void pop(char ele[])
{

   
    if(isEmpty())
    {
        printf("stack is empty");
    }
    else
    {
        strcpy(ele,s.st[s.top]);
        s.top--;
    }
 
}
int isEmpty()
{
    if(s.top==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isFull()
{
    if(s.top==MAX-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}