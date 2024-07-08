#include<stdio.h>
void main(){
int i,n,o,FREQUENCY=0;

printf("ENTER NUMBER=");
	scanf("%d",&n);
	printf("FIND FREQUENCY OF :");
	scanf("%d",&o);
	for(;n!=0;){
		i=(n%10);
		n/=10;
				if(i==o){
			FREQUENCY+=1;
		}
		
	}
	printf("%d",FREQUENCY);
	
}

