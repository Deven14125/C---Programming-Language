#include<stdio.h>
void main(){
	int i,j,n;
	printf("how many element you want to enter :");
	scanf("%d",&n);
	int a[i],k;
	for(i=0;i<n;i++){
		printf("enter an element at a[%d] :",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
		for(j=i+1;j<n;j++){
			if(a[i]==a[j]){
                for(k=j;k<n-1;k++)
                    a[k]=a[k+1];
                    n--;
                    j--; 
			}	
		}
        printf("--After Deletation--\n");
    for(i=0;i<n;i++){
    	printf("%d",a[i]);
    }
}
    