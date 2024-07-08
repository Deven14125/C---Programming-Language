#include<stdio.h>

int main()
{
    int a,i=1;
    printf("ENTER VAL of a=");
    scanf("%d",&a);
    
    while(i<=a){
         printf("%d*%d =%d\n",a,i,a*i);
         i=i+1;
    }
    return 0;
}