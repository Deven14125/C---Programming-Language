#include<stdio.h>

int main()
{
    int i,n,arr[n],c=0,c1=0;
    printf("Enter an element you want to enter :");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("enter an element arr[%d] :",i);
        scanf("%d",&arr[i]);
        }
    for(i=0;i<n;i++){
        if(arr[i]%2==0){
           printf("\narr[%d] is even",arr[i]);
           c++;
        }
        else{
            printf("\narr[%d] is odd",arr[i]);
            c1++;
        }
        }
        printf("\nCount of even=%d",c);
        printf("\ncount of odd=%d",c1);
    return 0;
}