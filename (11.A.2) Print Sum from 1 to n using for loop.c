#include<stdio.h>

int main()
{
    int n,i=1,sum=0;
    printf("Enter val of n=");
    scanf("%d",&n);
    for(;i<=n;i++)
 {   
 sum=sum+i;
 }
 printf("Sum=%d",sum);
    return 0;
}