#include<stdio.h>
void main(){
	float a,b;
	int operation;
	printf("Enter a : ");
	scanf("%f", &a);
	printf("Enter b : ");
	scanf("%f", &b);
	printf("Enter operation (1 for addition,2 for substraction,3 for multiplication,4 for division) : ");
	scanf("%d", &operation);
	switch(operation){
		case 1:
			printf("Addition: %f", a + b);
			break;
		case 2:
			printf("Substraction: %f", a - b);
			break;
		case 3:
			printf("Multiplication: %f", a * b);
			break;
		case 4:
			if (b != 0){
			printf("Division: %f", a / b);
			} else {
			printf("Error");
			}
			break;
		default:
			printf("Invalid operation");
	}	
}
