#include<stdio.h>

int main()
{
    int num;
    printf("enter an number");
    scanf("%d",&num);
    printf("%d",num);
    
    if (num < 0)
    	printf(":you entered a negative number");
    else if (num > 0)
    	printf(":you entered a positive number");
    else 
    	printf(":you entered a zero");        
    return 0;
}