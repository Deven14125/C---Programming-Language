#include<stdio.h>

int main()
{
	int x;
    char a;
    printf("Enter Number=");
    scanf("%d",&x);
    
    printf("Day is : %c",a);
        
    switch (x)
    {
    case 1    :printf("Monday");
               break;  
    case 2    :printf("Tuesday");    
               break;
    case 3    :printf("Wednesday");
               break;
    case 4    :printf("Thursday");
               break;
    case 5    :printf("Friday");
               break;
    case 6    :printf("Saturday");
               break;
    case 7    :printf("Sunday");
               break;
    default   :printf("not a valid");
    }
    
    return 0;
}