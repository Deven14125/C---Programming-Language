#include<stdio.h>
int addint(int a,int b){
    return a+b;
    }
void main(){
    int a,b;
    printf("Enter Val of a :");
    scanf("%d",&a);
    
    printf("Enter Val of b :");
    scanf("%d",&b);
    
    int sum=addint(a,b);
    printf("Sum of a+b = %d",sum);
    }