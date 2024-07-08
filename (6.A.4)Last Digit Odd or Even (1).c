#include<stdio.h>

int main()
{
	int a,b;
    printf("Enter val of a =");
    scanf("%d",&a);
    b = a % 10;
    if (b % 2==0)
    	printf("Last Digit Of Number Is Even ");
    else 
    	printf("Last Digit Of Number Is Odd");
    return 0;
}