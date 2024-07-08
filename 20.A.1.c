#include<stdio.h>
struct emp{
	char name[100];
	int salary,age;
};
void main(){
	struct emp e1;
	printf("enter a employee name :");
	gets(e1.name);
	printf("enter a employee salary :");
	scanf("%d",&e1.salary);
	printf("enter a employee age :");
	scanf("%d",&e1.age);
	
	printf("Employee name :%s",e1.name);
	printf("Employee salary :%d",e1.salary);
	printf("Employee age :%d",e1.age);
}
