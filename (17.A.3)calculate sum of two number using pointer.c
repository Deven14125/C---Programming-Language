#include<stdio.h>

int main()
{
    int *a,*b,m,n,c;
    printf("Enter val of m :");
    scanf("%d",&m);
    printf("Enter val of n :");
    scanf("%d",&n);
    
    a = &m;
    printf("First num :%d\n",*a);
    
    b = &n;
    printf("Second num :%d\n",*b);
    
    c = *a + *b;
    
    printf("Sum of two num :%d",c);
    return 0;
}