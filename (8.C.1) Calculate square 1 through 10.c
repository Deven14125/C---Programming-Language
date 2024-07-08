#include<stdio.h>

int main()
{
    int n=1,i=1,a;
    while(n<=10)
    {   
        a=i*i;
        printf("%d\n",a);
        i=i+1;
        n=n+1;
    }    
    return 0;
}