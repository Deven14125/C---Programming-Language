#include<stdio.h>

int main()
{
	char character;
    printf("Enter character=");
    scanf("%c",&character);
    
    if(character =='a' ||character =='e' ||character =='i' || character =='o' ||character =='u')
    	printf("character is Vowel");
    else
    	printf("character is Constant");    
     return 0;
}