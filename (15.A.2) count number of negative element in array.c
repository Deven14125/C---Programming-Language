#include<stdio.h>

int main()
{
    int i,n,arr[n],c=0;
    printf("Enter an element you want to enter :");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("enter an element arr[%d] :",i);
        scanf("%d",&arr[i]);
        }
    for(i=0;i<n;i++){
        if(arr[i]<0){
           printf("\narr[%d] is negative element",arr[i]);
           c++;
        }
        else{
            printf("\narr[%d] is not a element number",arr[i]);
        }
        }
    printf("\n\nCount of negative element :%d",c);
    return 0;
}