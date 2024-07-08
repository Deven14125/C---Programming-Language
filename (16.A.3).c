#include<stdio.h>
void main(){
	int i,j;
	int a[20][2];
	for(i=0;i<20;i++){
		for(j=0;j<2-1;j++){
			printf("Enter Roll number and Marks of student into a[%d][%d] :",i,j);
			scanf("%d %d",&a[i][j],&a[i][j+1]);
		}
		printf("\n");
	}
	for(i=0;i<20;i++){
		for(j=0;j<2-1;j++){
			printf("%d %d\n",a[i][j],a[i][j+1]);
		}
	}
}
