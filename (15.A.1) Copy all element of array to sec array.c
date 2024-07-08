#include<stdio.h>
void main(){ 
    int i,j,n;
    printf("how many number you want to enter :");
    scanf("%d",&n);
    int a1[n],a2[n],temp;
    for(i=0;i<n;i++){
        printf("Enter element in first array a[%d] :",i);
        scanf("%d",&a1[i]);
    }
    for(i=0;i<n;i++){
        temp=a1[i];
        a1[i]=a2[i];
        a2[i]=temp;
        }
    for(i=0;i<n;i++){    
        printf("Second array a2[%d]:%d\n",i,a2[i]);
        }
}