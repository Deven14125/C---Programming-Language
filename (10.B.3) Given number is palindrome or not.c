#include<stdio.h>

int main()
{    
    int n,sum=0,rem,a;
    a=n;
    printf("Enter a number =");
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
        sum=(sum*10)+rem;
        n=n/10;
    }
    if(a==sum){
         printf("Number is Palindrome");}
    else{
         printf("Number is not Palindrome");}
    return 0;
}