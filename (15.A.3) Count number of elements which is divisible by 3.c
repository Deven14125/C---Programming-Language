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
        if(arr[i]%3==0){
           printf("\narr[%d] is divisible by 3",arr[i]);
           c++;
        }
        else{
            printf("\narr[%d] is not divisible by 3",arr[i]);
        }
        }
    printf("\n\nCount of elements which is divisible by 3 =%d",c);
    return 0;
}