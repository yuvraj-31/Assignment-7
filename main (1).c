

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
        a=b;
        b=fibo;
    }
    printf("The %dth term of fibonacci series is %d",n,fibo);
    
    
    

    return 0;
}
