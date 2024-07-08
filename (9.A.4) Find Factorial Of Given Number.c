#include<stdio.h>

int main()
{
    int n,i=1,ans=1;
    printf("Enter a Number=");
    scanf("%d",&n);
    while(i<=n){
        ans=ans*i;
        i++;
        }
        printf("Answer:%d\n",ans);
    return 0;
}