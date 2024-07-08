#include<stdio.h>

int main()
{
    int a=100,b=200,i=100;
    printf("ENTER VAL of a=");
   // scanf("%d %d",&a,&b);
    
    while(i>=100 && i<=200){
          if((i%7==0)&&(i%5==1))
            printf("%d\n",i);
            i=i+1;
    }
    return 0;
}