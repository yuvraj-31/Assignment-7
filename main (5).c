

#include <stdio.h>

int main()
{
    int i,n1,n2;
    printf("Enter the two numbers\n");
    scanf("%d %d",&n1,&n2);
    int max=n1>n2?n1:n2;
    for(i=2;i<max;i++)
    {
        if(i<n1) 
        {   if((n1%i)==0)
              {
                 printf("numbers are not coprime numbers");
                 break;
              }
        }
         if(i<n2)
         {
             if((n2%i)==0)
            {
               printf("numbers are not coprime numbers");
               break;
            }
         }
    }
    if(i==max)
    {
        printf("both the numbers are co prime numbers");
    }
    
    
    return 0;
}
