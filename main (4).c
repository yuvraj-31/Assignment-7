

#include <stdio.h>

int main()
{
    int i,n1,n2;
    printf("Enter the two numbers\n");
    scanf("%d %d",&n1,&n2);
    int hcf,min;
    if(n1<n2)
      {
        min=n1;
      }
    else
     {
      min=n2;
     }
    for(i=1;i<=min;i++)
    {
        if((n1%i)==0 && (n2%i)==0)
        {
            hcf=i;
        }
    }
    printf("HCF of the two given numbers are %d",hcf);
    
    return 0;
}
