#include<stdio.h>

int main()
{
    int n,a,i=1,sum=0;
    printf("Enter val of n:");
    scanf("%d",&n);
    while(i<=n)
    {
        a=(i*i);
        sum=sum+a;
        i++;
    }
        printf("Sum :%d\n",sum);
    return 0;
}