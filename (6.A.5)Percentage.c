#include<stdio.h>

int main()
{
	int s1,s2,s3,s4,s5;
    float per;
    printf("Enter Mark of s1=");
    scanf("%d",&s1);
    printf("Enter Mark of s2=");
    scanf("%d",&s2);
    printf("Enter Mark of s3=");
    scanf("%d",&s3);
    printf("Enter Mark of s4=");
    scanf("%d",&s4);
    printf("Enter Mark of s5=");
    scanf("%d",&s5);
    
    per=(s1+s2+s3+s4+s5)/5.0;
    	printf("Percentage = %f\n",per);
    if (per<=35)
    	printf("Result = Fail");
    else if (per<=45) 
    	printf("Result = Pass");   
    else if (per<=60) 
    	printf("Result = Second Class");   
    else if (per<=70) 
    	printf("Result = First Class");   
    else if (per>70) 
    	printf("Result = Distinction");   
    return 0;
}