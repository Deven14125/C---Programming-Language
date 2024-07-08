#include<stdio.h>

int main()
{
    int a,i=0;
    printf("ENTER VAL OF a=");
    scanf("%d",&a);
    
    while(i<=a){
        if(i%2!=0)
          printf("ODD number is =%d\n",i);
          i=i+1;
    }
    return 0;
}