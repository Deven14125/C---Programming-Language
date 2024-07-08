#include <stdio.h>
void main() {
    int n,i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    int sum = 0;
    printf("Enter %d numbers: \n", n);
    for(i = 0; i < n; i++) {
        printf("arr[%d] : ",i);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    float average = (float)sum / n;
    int count = 0;
    for(i = 0; i < n; i++) {
        if(arr[i] > average) {
            count++;
        }
    }
    printf("Average: %.2f\n", average);
    printf("Count of numbers higher than the average: %d\n", count);
}