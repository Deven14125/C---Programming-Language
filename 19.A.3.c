#include<stdio.h>
#include<string.h>
void main(){
	char s1[1000],s2[1000],s3[1000];
	printf("enter 1st string :");
	gets(s1);
	printf("enter 2nd string :");
	gets(s2);
	
	printf("%s\n%s\n",s1,s2);

	printf("Length of s1 :%d\n",strlen(s1));
	printf("Length of s2 :%d\n",strlen(s2));
	printf("compare of s1&s2 :%d\n",strcmp(s1,s2));
	printf("copy of string :%s\n",strcpy(s1,s2));
	printf("string to concate :%s\n",strcat(s1,s2));
	s1;
	printf("string to lowercase :%s\n",strlwr(s1));
	printf("string to lowercase :%s\n",strlwr(s2));
	printf("string to lowercase :%s\n",strupr(s1));
	printf("string to lowercase :%s\n",strupr(s2));
	printf("reverse of s1 :%s\n",strrev(s1));
	printf("reverse of s2 :%s\n",strrev(s2));
	
}
