#include<stdio.h>

int main()
{
	int a;
    printf("Enter a=");
    scanf("%d",&a);
    printf("%d",a);
    
    if (a%2==0)
    {	printf(":No is Odd");}
    else
    {	printf(":No is Even");}
    return 0;
}