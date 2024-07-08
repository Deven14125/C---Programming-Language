#include<stdio.h>

int main()
{
	int a;
    printf("Enter val of a =");
    scanf("%d",&a);
    
    (a%2==0)?(printf("%d is Even Number",a)):(printf("%d is Odd Number",a));
    
    return 0;
}