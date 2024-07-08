#include<stdio.h>
int main(){
	int i,j,k;
	char ch='A';
	for(i=1;i<=5;i++){
		for(k=5;k>i;k--){
			printf(" ");
		}
		for(j=1;j<=i;j++){
			if(i%2==0){
				printf("%c ",ch);
				ch++;
			} else {
				printf("%d ",j);
			} 
		}
		printf("\n");
	}
	return 0;
}
