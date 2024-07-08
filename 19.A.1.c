#include<stdio.h>
int fac(int n);
void main(){
	int n;
	printf("enter a number :");
	scanf("%d",&n);
	int result=fac(n);
	printf("%d",result);
	
}
int fac(int n)
{
	if(n==0){
		return 1;
	}
	else{
		return n*fac(n-1);
	}
}
