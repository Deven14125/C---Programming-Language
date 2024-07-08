#include<stdio.h>

int main()
{
	int a,b,c;
    printf("Enter val = ");
    scanf("%d %d %d",&a,&b,&c);
    
    if ((a>b) && (a>c))
   { if (b>c)
    	printf("b is second largest number =%d",b);
    else 
    	printf("c is second largest number =%d",c);  } 
        
    if ((b>a) && (b>c))
   { if (c>a)
    	printf("c is second largest number =%d",c);
    else
    	printf("a is second largest number =%d",a);  }
        
    if ((c>a) && (c>b))
   { if (a>b)
    	printf("a is second largest number =%d",a);  }   
    else
    	printf("b is second largest number =%d",b);    
    return 0;
}