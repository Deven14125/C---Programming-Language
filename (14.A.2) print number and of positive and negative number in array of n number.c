#include<stdio.h>

int main()
{
    int i,n,arr[n],pos=0,neg=0;
    printf("Enter an element you want to enter :");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("enter an element arr[%d] :",i);
        scanf("%d",&arr[i]);
        }
    for(i=0;i<n;i++){
        if(arr[i]>0){
           printf("\narr[i] is positive",arr[i]);
           pos++;
        }
        else{ 
            printf("\narr[i] is negative",arr[i]);
            neg++;
        }
        }
        printf("\nCount of Positive number=%d",pos);
        printf("\nCount of Negative number=%d",neg);
    return 0;
}