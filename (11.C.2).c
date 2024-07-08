#include<stdio.h>
void main(){
    int x,y,i,ans=0,j,a;
    printf("Enter Base : ");
    scanf("%d",&x);
    printf("Enter Exponent : ");
    scanf("%d",&y);
    a=x;
    ans=x;
    for(i=1;i<y;i++){
        for(j=1;j<x;j++)
        {    ans =ans+a;
          printf("%d\n",ans);
        } 
    a=ans;
    }
    printf("ans = %d",ans);
}
