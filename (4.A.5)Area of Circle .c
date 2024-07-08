#include<stdio.h>

int main()
{
	float Pi=3.14,radius,area;
    printf("Enter radius=");
    scanf("%f",&radius);
    area=(Pi*radius*radius);
    printf("Area of a Circle = %f",area);
    return 0;
}