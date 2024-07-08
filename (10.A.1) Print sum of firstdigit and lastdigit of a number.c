#include<stdio.h>

int main()
{
    int n,i,sum=0,firstdigit,lastdigit; 
    printf("Enter a number :");
    scanf("%d",&n);
    lastdigit=n%10;
    while(n>=10)
        {
        n=n/10;
        }
        firstdigit=n;
        sum=firstdigit+lastdigit;
        printf("SUM IS :%d",sum);
    return 0;
}