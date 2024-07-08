#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter val of a :");
    scanf("%d",&a);
    printf("Enter val of b :");
    scanf("%d",&b);
    ((a^b)?printf("Number is not Equal"):printf("Number is Equal"));
    return 0;
}