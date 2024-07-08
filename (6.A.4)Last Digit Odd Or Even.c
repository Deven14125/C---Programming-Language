#include<stdio.h>

int main()
{
	int a;
    printf("Enter val of a =");
    scanf("%d",&a);
    
    if ((a+1)/2==0)
    	printf("Last Digit Of Number Is Even ");
    else 
    	printf("Last Digit Of Number Is Odd");
    return 0;
}