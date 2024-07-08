#include<stdio.h>
void main(){
	float a,b,c;
	printf("enter the length of 'a' : ");
	scanf("%f", &a);
	printf("enter the length of 'b' : ");
	scanf("%f", &b);
	printf("enter the length of 'c' : ");
	scanf("%f", &c);
	if (a==b && b==c){
		printf("Equilateral Triangle");}
	else if (a==b || b==c || a==c){
		printf("Isosceles Triangle");}
	else if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a){
		printf("Right-angled Triangle");}
	else { 
		printf("Scalene Triangle");}
}
