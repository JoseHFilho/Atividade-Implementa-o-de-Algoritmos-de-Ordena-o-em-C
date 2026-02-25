#include <stdio.h>
#include <time.h>

void printArray(int arr[], int n){
    int i;
    
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void selectionSort(int arr[], int n){
    int i, j, min, temp;

    for(i = 0; i < n - 1; i++) {
        min = i;
        for(j = i + 1; j < n; j++) {
            if(arr[j] < arr[min])
                min = j;
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}

int main(){
    int arr[] = {9,5,2,7,1,8,3,6,4,0};
    int n = 10;

    clock_t inicio = clock();

    selectionSort(arr, n);

    clock_t fim = clock();

    printArray(arr, n);
    printf("Tempo: %f\n", (double)(fim - inicio) / CLOCKS_PER_SEC);

    return 0;
}