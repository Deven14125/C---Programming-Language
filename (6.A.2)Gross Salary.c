#include<stdio.h>

int main()
{
	float BS,HRA,DA,GS;
    printf("Enter BS=");
    scanf("%f",&BS);
    
    if (BS>10000 && BS<=20000)
    { 
    	 HRA = 0.20 * BS;
    	 DA  = 0.80 * BS;
    }
    else if (BS>20000 && BS<30000)
    { 
    	 HRA = 0.25 * BS;
    	 DA  = 0.90 * BS;
    }
    else if (BS>30000)
    { 
    	 HRA = 0.30 * BS;
    	 DA  = 0.95 * BS;
    }	
    	GS = BS + HRA + DA;
     	printf("Gross Salary=%f",GS);
         
    return 0;
}