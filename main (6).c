

#include <stdio.h>

int main()
{
    int i,j;
    printf("The prime numbers between 1 to 100 are:\n");
    for(i=1;i<=100;i++)
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
        }
    }
    
    
       
    
    
    return 0;
}
