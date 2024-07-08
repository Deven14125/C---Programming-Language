#include<stdio.h>
void main()
{
    int i,j,n;
    for(i=1;i<=5;i++)
    {
        for(n=5;n>i;n--)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");   
    }   
}