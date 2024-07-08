#include<stdio.h>

int main()
{
    int x,y,i=1,result=1;
    printf("Enter val of x :");
    scanf("%d",&x);
    printf("Enter val of y :");
    scanf("%d",&y);
    while(i<=y)
    {
        result=result*x;
        i++;
    }
    printf("RESULT :%d",result);
    return 0;
}