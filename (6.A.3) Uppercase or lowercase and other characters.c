#include<stdio.h>
void main(){
	char ch;
	printf("enter the character : ");
	scanf("%c", &ch);
	if (ch>='a' && ch<='z')
	{
		printf("character is lowercase");
	}
	else if ( ch>='A' && ch<='Z')
	{
		printf("character is uppercase");
	}
	else if (ch>='1' && ch<='9')
	{
		printf("character is digit");
	}
	else
	printf("character is special symbols");
	
	}
