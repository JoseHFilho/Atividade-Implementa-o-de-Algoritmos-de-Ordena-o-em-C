#include <stdio.h>
#include <time.h>

void printArray(int arr[], int n){
    int i;

    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void bubbleSort(int arr[], int n){
    int i, j, temp;
    
    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {9,5,2,7,1,8,3,6,4,0};
    int n = 10;

    clock_t inicio = clock();

    bubbleSort(arr, n);

    clock_t fim = clock();

    printf("Array ordenado:\n");
    printArray(arr, n);
    printf("Tempo: %f\n", (double)(fim - inicio) / CLOCKS_PER_SEC);

    return 0;
}