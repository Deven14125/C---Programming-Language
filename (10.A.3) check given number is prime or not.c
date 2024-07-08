#include<stdio.h>

int main()
{
    int n,i=1,count=0;
    printf("Enter a number :");
    scanf("%d",&n);
    while(i<=n){
        if(n%i==0)
    { 
    count=count+1;
    }
    i++;
    }
    if(count==2)
    {
        printf("Number is PRIME");
    }
    else
    {
        printf("Number is Not PRIME");
    }
             
    return 0;
}