#include<stdio.h>

int main()
{
	int a,b,c,ans;
    printf("Enter val =");
    scanf("%d %d %d",&a,&b,&c);
    if (a>b) 
    if (a>c)
    	    printf("a is largest");
    else    printf("c is largest");      
    if (a<b)   
    if (c<b)
        	printf("b is largest");
    else    printf("c is largest");   
     //printf("sum = %d",ans);   
        
    return 0;
}