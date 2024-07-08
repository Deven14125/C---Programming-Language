#include<stdio.h>

int main()
{
    int n,i=1,count=0,count1=0;
    printf("Enter number:");
    scanf("%d",&n);
    while(i<=n)
    {
    if (i%2==0)
        {
            printf("Even numbers:%d\n\n",i);
            i++;
            count1=count1+1;
        }
    else
        {
            printf("Odd  numbers:%d\n\n",i);
            i++;
            count=count+1;
        }
    }
    n++;
                    printf("-----------Counts of odd-even-----------");
                    
    {
        printf("Even :%d\n\n",count1);
       
        printf("Odd  :%d",count);
    }   
    
    return 0;
}