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
void conversion_postfix_to_infix(char[],char[]);

int main()
{
    char postfix[MAX],infix[MAX];
    initialise();
    printf("enter the postfix expression:");
    fgets(postfix,MAX,stdin);
    conversion_postfix_to_infix(postfix,infix);
}
void initialise()
{
    s.top=-1;
}
void conversion_postfix_to_infix(char postfix[],char infix[])
{
    int i,ele;
    char temp[MAX],op1[MAX],op2[MAX],result[MAX];
    for(i=0;i<strlen(postfix);i++)
    {
        if(isalpha(postfix[i]))
        {
            temp[0]=postfix[i];
            temp[1]='\0';
            //printf("temp -%s\n",temp);
            //printf("top is%d",s.top);

            push(temp);
        }
        else if(postfix[i] =='+'||postfix[i] =='-'||postfix[i] =='*'||postfix[i] =='/'||postfix[i] =='%'||postfix[i] =='^')
        {
            pop(op2);
            pop(op1);
            strcpy(result,"(");
            strcat(result,op1);
            temp[0]=postfix[i];
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