#include<stdio.h>

int main()
{
    int a,i=1;
    printf("ENTER VAL of a=");
    scanf("%d",&a);
    
    while(i<=a){
         if(a%i==0)
         printf("Factor is=%d\n",i);
         i=i+1;
    }
    return 0;
}