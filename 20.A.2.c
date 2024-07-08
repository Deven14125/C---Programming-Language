#include<stdio.h>
struct book{
	char title[100],author[100],pub[100];
	float price;
};
void main(){
	struct book b[4];
	int i;
	for(i=0;i<4;i++){
	printf("Enter a %dst book title :",i+1);
	scanf("%s",b[i].title);
	printf("Enter a %dst book author :",i+1);
	scanf("%s",b[i].author);
	printf("Enter a %dst book pub :",i+1);
	scanf("%s",b[i].pub);
	printf("Enter a %dprice of book :",i+1);
	scanf("%f",&b[i].price);
	}
	for(i=0;i<4;i++){
		printf("Title  :%s\n",b[i].title);
		printf("Author :%s\n",b[i].title);
		scanf("Publication :%s\n",b[i].title);
		printf("Price :%f\n",b[i].price);
	}
}
