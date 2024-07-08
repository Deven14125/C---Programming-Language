#include<stdio.h>
void main(){
	int l=0,sum=0,i,j,n;
	printf("Enter a number : ");
	scanf("%d", &n);
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			l=l+j;
		}
		sum = sum + l;
		l=0;
	}
	printf("sum = %d", sum);
}
