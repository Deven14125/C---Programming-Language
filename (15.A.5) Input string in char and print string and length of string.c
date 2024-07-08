#include<stdio.h>
#include<string.h>
void main(){
    char a[100];
    printf("Enter string :");
    gets(a);
    printf("String :%s\n\n",a);
    printf("Length of String :%d",strlen(a));
}