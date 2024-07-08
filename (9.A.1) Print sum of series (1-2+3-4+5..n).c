#include<stdio.h>

int main()
{
    int n,i=1,count=0,count1=0,sum=0,sum1=0,ts;
    printf("Enter number:");
    scanf("%d",&n);
    while(i<=n)
    {
    if (i%2==0)
        {
            printf("Even numbers:%d\n\n",i);
            i++;
            count1=count1+1;
            sum1=sum+count1;
        }
    else
        {
            printf("Odd  numbers:%d\n\n",i);
            i++;
            count=count+1;
            sum=sum+count;
        }
    }
    n++;
                    printf("-----------Counts of odd-even-----------");
                    
    {
        printf("Even :%d\n\n",count1);
       
        printf("Odd  :%d\n\n",count);
        
        printf("Sum of Even:%d\n\n",sum1);
        
        printf("Sum of Odd :%d\n\n",sum);
        
        ts=sum-sum1;
        printf("Total Sum:%d",ts);
    }   
    
    return 0;
}