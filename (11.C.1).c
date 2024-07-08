#include<stdio.h>
void main(){
   int n,a,b,c,d;
   float i=0.01;
   printf("Enter a number: ");
   scanf("%d",&n);
   a = n%10;
   d = n;
   for(n=n;n>0;){
       b=n%10;
       n=n/10;
       i=i*10; 
   }
   c=d-a;
   c=c/10;
   c=c-(b*i);
   printf("%d %d %d",a,c,b);
}
