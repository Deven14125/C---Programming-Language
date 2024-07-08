#include<stdio.h>

int main()
{
    int i,n,person=0,height[n],weight[n];
    printf("Enter an element you want to enter :");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("\nenter a Height [%d] :",i);
        scanf("%d",&height[i]);
        printf("\nenter a Weight [%d] :",i);
        scanf("%d",&weight[i]);
        }
    for(i=0;i<n;i++){
        if(height[i]>=170 && weight[i]<=50){
            person=person+1;
            }
            }
            printf("\nHeight is>170 & Weight is<50 person :[%d]",person);
    return 0;
}