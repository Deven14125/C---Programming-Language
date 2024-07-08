#include<stdio.h>
void main(){ 
    int *ptr,i,n;
    printf("How many element you want to enter :");
    scanf("%d",&n);
    int a[n]; 
    for(i=0;i<n;i++){
        printf("Enter element into a[%d] :",i);
        scanf("%d",&a[i]);
        }
    for(i=0;i<n;i++){
        ptr=&a[i];
        printf("Element at a[%d] :%d\n",i,*ptr);
    } 
}