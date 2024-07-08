#include<stdio.h>

int main()
{
    int n,i=1,sum=0;
    printf("Enter val of n=");
    scanf("%d",&n);
    while(i<n)
    {
        if(n%i==0)
        sum=sum+i;
        i++;
        }
        
        if (sum==n)
            printf("Number is PERFECT");
        else 
            printf("Number is not PERFECT");   
            
    return 0;
}