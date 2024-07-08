#include<stdio.h>

int main()
{
	float I,P,R,N;
    printf("Calculate Interest\n");
  {
    printf("Enter val");
    scanf("%f %f %f",&P,&R,&N);
    I=(P*R*N)/100.0;
    printf("Interest = %f",I);
  }
    return 0;
}