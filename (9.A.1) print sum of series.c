#include<stdio.h>

int main()
{
    int n,i=1,sum=0;
    printf("Enter a number :");
    scanf("%d",&n);
    while(i<=n)
    {
        if(i%2==0)
        {
            sum-=i;
        }
        else
        {
            sum+=i;
        }
        i++;
    }   
    printf("SUM :%d",sum); 
    return 0;
}