#include<stdio.h>

int main()
{
	int Chemistry,Physics,Math,English,Computer;
    float Per;
   
    printf("1.Enter Mark of Chemistry=");
    scanf("%d",&Chemistry);
    printf("100 out of = %d",Chemistry);
    
    printf("\n2.Enter Mark of Physics=");
    scanf("%d",&Physics);
    printf("100 out of = %d",Physics);
    
    printf("\n3.Enter Mark of Math=");
    scanf("%d",&Math);
    printf("100 out of = %d",Math);
    
    printf("\n4.Enter Mark of English=");
    scanf("%d",&English);
    printf("100 out of = %d",English);
    
    printf("\n5.Enter Mark of Computer=");
    scanf("%d",&Computer);
    printf("100 out of = %d",Computer);
    
    Per=(Chemistry+Physics+Math+English+Computer)/5;
    printf("\nPercentage = %f",Per);
    
    if (Per<=35)
    	printf("\nResult = Fail");
    else if (Per<=45) 
    	printf("\nResult = Pass");   
    else if (Per<=60) 
    	printf("\nResult = Second Class");   
    else if (Per<=70) 
    	printf("\nResult = First Class");   
    else if (Per>70) 
    	printf("\nResult = Distinction");
    return 0;
}