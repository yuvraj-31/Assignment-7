

#include <stdio.h>

int main()
{
    int i,j,n1,n2;
    printf("Enter the two numbers\n");
    scanf("%d %d",&n1,&n2);
    printf("The prime numbers between %d and %d are:\n",n1,n2);
    for(i=n1;i<=n2;i++)
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
