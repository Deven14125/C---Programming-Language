#include<stdio.h>

int main()
{
	int a,b1,b2;
    printf("Enter val of a= ");
    scanf("%d",&a);
    b1 = a<<1;
    b2 = a>>1;
    printf("b1 = %d , b2 = %d",b1,b2);
    return 0;
}