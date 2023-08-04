#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("Enter no of elements: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter elements: ");
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    int sum = 0, max = arr[0], min = arr[0];

    printf("Even ones: ");

    for(int i = 0; i < n; i++){
        sum = sum + arr[i];
        if(max < arr[i])
            max = arr[i];
        if(min > arr[i])
            min = arr[i];

        if(arr[i] % 2 == 0)
            printf("%d ", arr[i]);
    } 

    int  max1 = min, min1 = max;

    printf("\n ");
    printf("Odd ones: ");

    for(int i = 0; i < n; i++){
        if(arr[i] < max && arr[i] > max1)
            max1 = arr[i];
        if(arr[i] > min && arr[i] < min1)
            min1 = arr[i];

        if(arr[i] % 2 == 1)
            printf("%d ", arr[i]);
    }

    double avg = sum/n;

    printf("\n ");
    printf("Sum: %d \n", sum);
    printf("Average: %f \n", avg);
    printf("Largest: %d \n", max);
    printf("Smallest: %d \n", min);
    printf("Second Largest: %d \n", max1);
    printf("Second Smallest: %d \n", min1);


    



    return 0;
}