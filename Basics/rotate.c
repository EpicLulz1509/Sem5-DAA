#include<stdio.h>
#include<stdlib.h>


void EXCHANGE(int* arr, int p1, int p2) {
    int temp = arr[p1];
    arr[p1] = arr[p2];
    arr[p2] = temp;
}

void ROTATE_RIGHT(int* arr, int p2) {
    int temp = arr[0];
    for (int i = p2 - 1; i > 0; i--) {
        EXCHANGE(arr, i, i - 1);
    }
    arr[1] = temp;
}

int main(){
    
    int n;
    printf("Enter no of elements: ");
    scanf("%d", &n);
    int arr[n];

    printf("Before rotate: ");
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    

    ROTATE_RIGHT(arr, 5);

    printf("After rotate: ");
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}