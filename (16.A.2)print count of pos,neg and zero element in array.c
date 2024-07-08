#include <stdio.h>
void main(){
    int i,j,a[3][3],pos=0,neg=0,zero=0;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Enter the element into a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
 }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
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
    printf("\npositive=%d,\nnegative=%d,\nzero=%d",pos,neg,zero);
   
}   
    
