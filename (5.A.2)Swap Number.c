#include<stdio.h>

int main()
{
	int a,b,temp;
    printf("enter a=");
    scanf("%d",&a);
    printf("enter b=");
    scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;
    printf("b = %d",b) , printf("a = %d",a);
    return 0;
}