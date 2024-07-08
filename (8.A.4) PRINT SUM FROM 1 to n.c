#include<stdio.h>

int main()
{
    int a,i=0,sum=0;
    printf("ENTER VAL OF a=");
    scanf("%d",&a);
    
    while(i<=a){
          printf("%d\n",i);
          sum=sum+i;
          i=i+1;
    }
    printf("SUM = %d",sum);
    return 0;
}