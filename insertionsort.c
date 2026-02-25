#include <stdio.h>
#include <time.h>

void printArray(int arr[], int n){
    int i;

    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void insertionSort(int arr[], int n){
    int i, j, chave;
    for(i = 1; i < n; i++) {
        chave = arr[i];
        j = i - 1;

        while(j >= 0 && arr[j] > chave){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = chave;
    }
}

int main() {
    int arr[] = {9,5,2,7,1,8,3,6,4,0};
    int n = 10;

    clock_t inicio = clock();

    insertionSort(arr, n);

    clock_t fim = clock();

    printArray(arr, n);
    printf("Tempo: %f\n", (double)(fim - inicio) / CLOCKS_PER_SEC);

    return 0;
}