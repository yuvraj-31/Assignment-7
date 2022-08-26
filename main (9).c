

#include <stdio.h>
#include<math.h>

int main()
{
    int i,c,n,sum=0,counter=0;
    printf("Enter a number\n");
    scanf("%d",&n);
    int temp1=n;
    int temp2=n;
    for(i=1;n!=0;i++)
    {
       c=n%10;
       counter++;
       n=n/10;
    }
    for(i=1;temp1!=0;i++)
    {  
        sum=sum+pow((temp1%10),counter);
        temp1=temp1/10;
    }
    if(sum==temp2)
    {
        printf("given number is an armstrong number");
    }
    else
    {
        printf("given number is not an armstrong number");
    }
    
    return 0;
}
