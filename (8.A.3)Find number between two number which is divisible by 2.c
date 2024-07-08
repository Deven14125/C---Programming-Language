#include<stdio.h>

void main()
{
    int a,b;
    printf("Enter val of a:");
    scanf("%d",&a);
    printf("Enter val of b:");
    scanf("%d",&b);
    while(a<=b)
    {
     if(a%2==0)
       {
        printf("%d",a);
       }
       a++;
       printf("\n"); 
    }   
}