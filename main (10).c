

#include <stdio.h>
#include<math.h>

int main()
{
    int i,j;
    int temp1,temp2,temp3,sum,counter;
    
    for(i=1;i<=1000;i++)
    {    temp1=i;
         temp2=i;
         temp3=i;
         sum=0,counter=0;
        for(j=i;temp3!=0;j++)
         {
            counter++;
            temp3/=10;         //take new variable instead of i because it reverts back to 1 and it will only print 1 infinitely
          }
        while(temp1!=0)
         { 
            sum=sum+pow((temp1%10),counter);
            temp1=temp1/10;
             
         }
         if(sum==temp2)
                {
                 printf("%d ",temp2);
                }
    }
    
    
    return 0;
}
