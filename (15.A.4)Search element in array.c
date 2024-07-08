#include<stdio.h>
void main(){ 
    int i,j,n,s,flg;
    printf("how many number you want to enter :");
    scanf("%d",&n);
    int a[n],temp;
    for(i=0;i<n;i++){
        printf("Enter element in first array a[%d] :",i);
        scanf("%d",&a[i]);
    }
	printf("search element  :");
	scanf("%d",&s);
	for(i=0;i<n;i++){
		if(a[i]==s){
			flg=1;
			break;
		}
	}
	if(flg==1){
		printf("search element is a[%d]",i);
	}
	else{
		printf("enter a valid value:");
	}
}
