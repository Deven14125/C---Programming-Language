/*#include<stdio.h>

int main()
{
   int m,n;
       printf("Enter row and column :");
       scanf("%d %d",&m,&n);
   int i,j,a[i][j],b[i][j],c[i][j];    
   for(i=0;i<m;i++){
       for(j=0;j<n;j++){
          printf("\nEnter [%d][%d]",i+1,j+1);
          scanf("%d",&a[i][j]);
       }
   for(i=0;i<m;i++){
       for(j=0;j<n;j++){   
          printf("\nEnter [%d][%d]",i+1,j+1);
          scanf("%d",&b[i][j]);
          }
       }   
   for(i=0;i<m;i++){
       for(j=0;j<n;j++){ 
               c[i][j]=a[i][j]+b[i][j];
               printf("\nAddition of matrix :%d",c[i][j]);
          }    
       }
       printf("\n\n");
   }
   return 0;
}*/
#include <stdio.h>
int main()
{
    int m, n, i, j, a[10][10], b[10][10], c[10][10];
    printf("Enter the number of rows and columns of matrix\n");
    scanf("%d%d", & m, & n);
    printf("Enter the elements of first matrix\n");
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++) 
            scanf("%d", & a[i][j]);
    printf("Enter the elements of second matrix\n");
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++) 
            scanf("%d", & b[i][j]);
    printf("Sum of entered matrices:-\n");
    for (i = 0; i < m; i++){
        for (j = 0; j < n; j++){
            c[i][j] = a[i][j] + b[i][j];
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}