#include<stdio.h>

int main()
{
    char ch;
    for(ch='A';ch<='Z';ch++)
        printf("ASCII VAL OF %c IS %d\n\n",ch,ch);
    for(ch='a';ch<='z';ch++)
        printf("ASCII VAL OF %c IS %d\n\n",ch,ch);    
    return 0;
}