#include<stdio.h>

int main()
{
	int a;
    printf("Enter a=");
    scanf("%d",&a);
    
    if((a&1)==0)
    	printf("%d = even number",a);
    else if ((a&1)==1)
    	printf("%d is odd number",a);   
    return 0;
}