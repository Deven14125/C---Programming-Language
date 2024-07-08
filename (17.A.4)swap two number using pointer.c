#include<stdio.h>
int main()
{
    int *ptr,a,b,temp;
    printf("Enter val of a :");
    scanf("%d",&a);
    printf("Enter val of b :");
    scanf("%d",&b);
    ptr=&a;
    printf("a = %d\n\n",*ptr);
    ptr=&b;
    printf("b = %d\n\n",*ptr);
    {
        temp=a;
        a=b;
        b=temp;
        printf("\tAfter Swaping\n");
        printf("a = %d\n\nb = %d",a,b);
        }
    return 0;
}