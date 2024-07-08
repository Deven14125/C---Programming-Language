#include<stdio.h>

int main()
{
	int a,b,c,larg;
    printf("Enter Three Numbers =");
    scanf("%d %d %d",&a,&b,&c);
    
    larg=((a>b)&&(a>c))?a:b;	larg =((b>a)&&(b>c))?b:c;  larg =((c>a)&&(c>b))?c:a;
     
    printf("largest is = %d",larg);
       
    return 0;
}