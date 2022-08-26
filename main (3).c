

#include <stdio.h>

int main()
{
    int i,n;
    printf("Enter the number\n");
    scanf("%d",&n);
    int a=-1,b=1,fibo;
    for(i=1;i<=(n+2);i++)
    {
        fibo=a+b;
        if(fibo==n)
        {
            printf("The given number %d is in the fibonacci series",n);
            break;
        }
        a=b;
        b=fibo;
        
    }
    if(i==(n+3))
    {
        printf("The given number %d is not in the fibonacci series",n);
    }

    return 0;
}
