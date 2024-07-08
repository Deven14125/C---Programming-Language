#include<stdio.h>
int main(){
    int n,i,a[i],sum=0,x=1;
    float avg,geo,hm=0;
    printf("How many element you want to enter :");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter an element into a[%d]",i);
        scanf("%d",&a[i]);
        sum+=a[i];
        avg=sum/n;
    }
    for(i=0;i<n;i++){
        hm=hm+(1/a[i]);
        }
    hm=n/hm;  
    for(i=0;i<n;i++){
        x=x*a[i];
        }
    geo=pow(x,1/n);    
    printf("Average :%f\n",avg);
    printf("hm mean :%f\n",hm);  
    printf("Geometric :%f",geo);   
    return 0;
}