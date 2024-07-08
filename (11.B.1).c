#include<stdio.h>
void main(){
	int i,n,t1=0,t2=1,next_term;
	printf("Enter total terms in Fibonacci Series : ");
	scanf("%d",&n);
	printf("Fibonacci Series : ");
	printf("%d %d ",t1,t2);
	next_term = t1 + t2;
	for(i=3;i<=n;++i){
		printf(" %d ",next_term);
		t1=t2;
		t2 = next_term;
		next_term = t1+t2; 
	}
}
