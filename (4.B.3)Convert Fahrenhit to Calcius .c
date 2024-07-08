// Convert Fahrenheit To Calcius;
//F=Fahrenheit,C=Calcius; 
#include<stdio.h>

int main()
{
	float F,C;
    printf("Enter val of Fahrenheit=");
    scanf("%f",&F);
    C=(F-32)*5/9;
    printf("Calcius = %f",C);
    return 0;
}