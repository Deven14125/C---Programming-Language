#include<stdio.h>

int main()
{
    int n,i=0,sum=0,val;
    float avg=0;
    printf("How many numbers you want to enter:");
    scanf("%d",&n);
    while(i<n)
    {
        printf("Enter n [%d]:",i+1);
        scanf("%d",&val);
        sum=sum+val;
        avg=(sum)/n;
        i++;
    }
        printf("Sum :%d\n",sum);
        printf("Avg :%f",avg);
    return 0;
}