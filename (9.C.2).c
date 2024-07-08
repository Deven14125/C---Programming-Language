#include<stdio.h>
void main(){
  int n,rem,i=1,binary=0;
  printf("Enter the Number : ");
  scanf("%d",&n);
  while(n!=0){
    rem=n%2;
    binary=binary+(rem*i);
    i=i*10;
    n=n/2;
  }
  printf("Binary Value : %d",binary);  
}      
