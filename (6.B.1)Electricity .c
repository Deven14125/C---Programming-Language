#include<stdio.h>

int main()
{
	int unit;
    float total;
    
    	printf("enter electricity consumption");
        scanf("%d",&unit);
        
    if  (unit<=50)
    {
    	total=unit*0.5;
    }
    else if  (unit<=150)
    {
    	total=25+((unit-50)*0.75);
    }    
    else if  (unit<=250)
    {
    	total=100 + ((unit-150)*1.20);
    }
    else if (unit>250)
    {
    	total = 220 + ((unit-250)*1.5);
    }
    	total = total + total*0.2;
        printf("total bill=%f",total);
    
    return 0;
}