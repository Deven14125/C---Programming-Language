#include<stdio.h>
#include<string.h>
void main(){
	int i,n;
	printf("how many number you want to enter :");
	scanf("%d",&n);
	
	int a[n];
	for(i=0;i<n;i++){
		printf("element at a[%d] :",i);
		scanf("%d",&a[i]);	
	}
	array(n,a);
}
	void array(int n,int a[]){
	int i;

	for(i=0;i<n;i++){
		printf("element at a[%d]=%d\n",i,a[i]);
		}
	}
