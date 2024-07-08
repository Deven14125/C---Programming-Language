#include<stdio.h>
int addint(int,int,int);
void main(){
    int p,n,r;
    printf("Enter Val of p :");
    scanf("%d",&p);
    printf("Enter Val of r :");
    scanf("%d",&r);
    printf("Enter Val of n :");
    scanf("%d",&n);
    
    int res=addint(p,r,n);
    printf("Interest :%d",res);
    }
    int addint(int r,int n,int p){
    return (p*r*n)/100;
    }