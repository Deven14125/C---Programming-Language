#include<stdio.h>
void main(){
	int i,*ptr_i;
	float f,*ptr_f;
	char ch,*ptr_ch;
	double d,*ptr_d;
	printf("enter an int num :");
	scanf("%d",&i);
	printf("enter an float num :");
	scanf("%f",&f);
	printf("enter an char :");
	scanf(" %c",&ch); 
	printf("enter an double int :");
	scanf("%lf",&d);
	
	ptr_i=&i;
	ptr_f=&f;
	ptr_ch=&ch;
	ptr_d=&d;
	
	
	printf("value :%d\n",*ptr_i);
	printf("Address :%d\n",ptr_i);
	printf("value :%f\n",*ptr_f);
	printf("Address :%d\n",ptr_f);
	printf("value :%c\n",*ptr_ch);
	printf("Address :%d\n",ptr_ch);
	printf("value :%lf\n",*ptr_d);
	printf("Address :%d\n",ptr_d);
}
