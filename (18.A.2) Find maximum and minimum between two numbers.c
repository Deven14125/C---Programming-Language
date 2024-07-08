#include<stdio.h>
int max&min(int a,int b,int *max,int *min){
    if(a>b){
        *max=a;
        *min=b;
        }
    else{
        *max=b;
        *min=a;
        }
    }
void main(){
    int a,b,max,min;
    printf("Enter Val of a :");
    scanf("%d",&a);
    
    printf("Enter Val of b :");
    scanf("%d",&b);
    {
        int max&min=addint(a,b,max,min);
        printf("Maximum : %d",max);
        printf("Minimum : %d",min);
    }
}    