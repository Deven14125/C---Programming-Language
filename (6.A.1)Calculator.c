#include<stdio.h>

int main()
{
	float a,b,A;
    char choice;
    printf("Enter val of a=");
    scanf("%f",&a);
    printf("Enter val of b=");
    scanf("%f",&b);
    printf("Enter your choice = '+','-','*','/' = ");
    scanf(" %c",&choice);
    
    {
    if (choice=='+')
    {	A=a+b;
        printf("%f",A);
    }
    else if (choice=='-')    
    {	A=a-b;
    	printf("%f",A);
    }
    else if (choice=='*')
    {	A=a*b;
    	printf("%f",A);
    }
    else if (choice=='/') 
    {	A=a/b;
    	printf("%f",A);
    }
    }    
    return 0;
}