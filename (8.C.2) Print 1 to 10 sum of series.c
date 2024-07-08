#include<stdio.h>

int main()
{
    int n=1,i=1,sum=0,a;
    while(n<=10)
    { 
        a=i*i;
        printf("%d\n",a);
        sum=sum+a;
        i=i+1;
        n=n+1;
    }    
    printf("Sum=%d",sum);
    return 0;
}