#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("Enter no of elements: ");
    scanf("%d", &n);
    int arr[n], prefix[n];

    printf("Enter elements: ");
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    prefix[0] = arr[0];

    for (int i = 1; i < n; i++){
        prefix[i] = arr[i] + prefix[i-1];
    }

    for(int i = 0; i < n; i++){
        printf("%d ", prefix[i]);
    }
    

    
    printf("\n");
    return 0;
}