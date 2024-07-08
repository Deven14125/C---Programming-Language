#include <stdio.h>
void main(){
    int m,n,i,j,sum=0;
    printf("Enter number of rows:");
    scanf("%d",&m);
    printf("Enter number of column:");
    scanf("%d",&n);
    int a[m][n];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("Enter the element into a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }     
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(i==j){
                printf("diagonal element a[%d][%d]:%d\n",i,j,a[i][j]);
                sum=sum+a[i][j];
            }
        }
    }    
    printf("SUM of diagonal element :%d",sum);
}