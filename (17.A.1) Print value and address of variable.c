#include<stdio.h>
void main()
{
    int *a;
    int x;
    printf("Enter val of x :");
    scanf("%d",&x);
    a=&x;
    printf("%d\n",x);
    printf("%u",a);
    
}