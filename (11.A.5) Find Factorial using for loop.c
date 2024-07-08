#include<stdio.h>

int main()
{
    int n,i,ans=1;
    printf("Enter a Number=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        {
        ans=ans*i;
        }
        printf("Answer:%d\n",ans);
    return 0;
}