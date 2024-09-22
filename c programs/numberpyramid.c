#include <stdio.h>
int main()
{
    int i,n,j;
    printf("enter rows number" );
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf(" %d",j);
        }
    }
    return 0;
}
