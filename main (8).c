

#include <stdio.h>

int main()
{
    int i,j,n;
    printf("Enter a number\n");
    scanf("%d",&n);
    printf("The next prime number is:\n");
    for(i=n+1;i<=n+6;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                break;
            }
        }
        if(j>=i)
        {
            printf("%d ",i);
            break;
        }
    }
    
    
       
    
    
    return 0;
}
