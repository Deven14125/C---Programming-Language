#include<stdio.h>

int main()
{
	char character;
    printf("Enter a character = ");
    scanf("%c",&character);
    
    (character>='a'&&character<='z')||(character>='A'&&character<='Z')?printf("Character is Alphabet"):printf("Character is not Alphabet");   
    return 0;
}