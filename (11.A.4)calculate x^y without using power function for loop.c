#include<stdio.h>

int main()
{
    int x,y,i,result=1;
    printf("Enter val of x :");
    scanf("%d",&x);
    printf("Enter val of y :");
    scanf("%d",&y);
    for(i=1;i<=y;i++)
    {
        result=result*x;
    }
    printf("RESULT :%d",result);
    return 0;
}