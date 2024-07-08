#include<stdio.h>

int main()
{
   int i,j,pos=0,neg=0,zero=0;
   int a[3][3];   
       for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                printf("\nEnter [%d][%d]",i,j);
                scanf("%d",&a[i][j]);
                if(a[i][j]>0){
                    pos++;  
                }
                else if(a[i][j]<0){
                    neg++;
                }  
                else{
                    zero++;
                }
            }
       }
       printf("positive=%d,negative=%d,zero=%d",pos,neg,zero);    
   return 0;
}