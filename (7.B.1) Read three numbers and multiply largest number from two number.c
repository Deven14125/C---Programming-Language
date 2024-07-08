#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter val of a :");
    scanf("%d",&a);
    printf("Enter val of b :");
    scanf("%d",&b);
    printf("Enter val of c :");
    scanf("%d",&c);
    ((a>b)?printf("ANSWER :%d*%d=%d",a,c,a*c):printf("ANSWER :%d*%d=%d",b,c,b*c));
    return 0;
}