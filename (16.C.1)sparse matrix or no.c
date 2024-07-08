#include<stdio.h>
void main(){
	int i,j,m,n,zero=0,n_zero=0;
	printf("Enter num of row :");
	scanf("%d",&m);
	printf("Enter num of col :");
	scanf("%d",&n);
	int a[m][n];
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("Enter an element into a[%d][%d] :",i,j);
			scanf("%d",&a[i][j]);
			if(a[i][j]==0){
				zero++;
				}
			else{
				n_zero++;
			}	
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d\t",a[i][j]);	
			}
			printf("\n");
			}
	if(zero>n_zero){
		printf("Matrix is sparse");
	}		
	else{
		printf("Matrix is not a sparse");
	}
}
