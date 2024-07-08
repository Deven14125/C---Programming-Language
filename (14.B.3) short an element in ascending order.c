#include<stdio.h>
void main(){
	int i,j,temp,n;
	printf("how many element you want to enter :");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		printf(" emter an element into a[%d] :",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp; 
			}
		}
	}
	for(i=0;i<n;i++){	
			printf("%d\n",a[i]);
		}
}
