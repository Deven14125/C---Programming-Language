#include<stdio.h>

int main()
{
    int i,n,arr[n],sum=0,max,min,avg;
    printf("Enter an element you want to enter :");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("enter an element arr[%d] :",i);
        scanf("%d",&arr[i]);
        }
    for(i=0;i<n;i++){
    {
        sum=sum+arr[i];
    }
    max=arr[0];
    if(max<arr[i]){
        max=arr[i];
        }
    min=arr[0];
    if(min>arr[i]){
        min=arr[i];
        }
    {    
    avg=sum/n;  
    }
    }    
    printf("\nSum :%d",sum);
    printf("\nMax element is :%d",max);
    printf("\nMin element is :%d",min);  
    printf("\nAvg of element is :%d",avg);     
        
    return 0;
}