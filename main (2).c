

#include <stdio.h>

int main()
{
    int i,n;
    printf("Enter a Nth term\n");
    scanf("%d",&n);
    int a=-1,b=1,fibo;
    for(i=1;i<=n;i++)
    {
        fibo=a+b;
        printf(" %d",fibo);
        a=b;
        b=fibo;
    }

    return 0;
}
