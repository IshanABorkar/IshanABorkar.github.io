#include <stdio.h>

int main()
{
    int i,a,b,n,flag=0;
    printf("enter first number");
    scanf("%d",&a);
    printf("enter second number");
    scanf("%d",&b);

    for(i=a;i<b;i++)
    {
        //printf("%d",i);
        flag=0;
        for(n=2;n<=i-1;n++)
        {
            if(i%n==0)
            {
                flag=1;
                break;
            }
        }

        if(flag==0)
        {
            printf("\n %d" ,i);
        }    
    }
    return 0;

}