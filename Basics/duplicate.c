#include<stdio.h>
#include<stdlib.h>

int main(){
    
    int n;

    FILE *file = fopen("file1", "r");

    if (file == NULL) {
        printf("Error: File not found.\n");
        return 1;
    }

    printf("Enter no of elements to read: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        if (fscanf(file, "%d", &arr[i]) != 1) {
            printf("Error \n");
            fclose(file);
            return 1;
        }
    }

    fclose(file);

    printf("Elements:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            if(arr[j+1] < arr[j]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("Elements:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int dup = 0, total = 0, count = 0, max = 0;
    for(int i = 1; i < n; i++){
        if(arr[i] == arr[i-1]){
            total++;
            count++;
        }
        else{
            if(count > dup){
                dup = count;
                max = arr[i-1];
            }
            count = 0;
        }
    }

    printf("Duplicate values: %d \n", dup+1);
    printf("Maximum duplicates: %d", max);

    return 0;
}