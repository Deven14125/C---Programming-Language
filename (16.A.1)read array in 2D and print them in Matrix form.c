#include <stdio.h>

void main(){
    int m,n,i,j;
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
}