#include<stdio.h>
float large(float a,float b,float c){
	if(a>b){
		if(a>c){
			return a;
			}
		}
	else if(b>c){
		return b;
		}
	else{
		return c;
	}
}
void main(){
	float a,b,c;
	
	printf("Enter a val of a:");
	scanf(" %f",&a);
	printf("Entner a val of b:");
	scanf(" %f",&b);
	printf("Enter a val of c:");
	scanf(" %f",&c);
	
	float max=large(a,b,c);
	printf("largerst number :%.1f",max);
}
