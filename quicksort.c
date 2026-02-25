#include <stdio.h>
#include <time.h>

void printArray(int arr[], int n){
    int i;

    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int particao(int arr[], int baixo, int alto){

    int pivot = arr[alto];
    int i = baixo - 1, temp, j;

    for(j = baixo; j < alto; j++) {
        if(arr[j] < pivot) {
            i++;
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    temp = arr[i + 1];
    arr[i + 1] = arr[alto];
    arr[alto] = temp;

    return i + 1;
}

void quickSort(int arr[], int baixo, int alto){

    if(baixo < alto) {
        int pi = particao(arr, baixo, alto);
        quickSort(arr, baixo, pi - 1);
        quickSort(arr, pi + 1, alto);
    }
}

int main() {
    int arr[] = {9,5,2,7,1,8,3,6,4,0};
    int n = 10;

    clock_t inicio = clock();

    quickSort(arr, 0, n - 1);

    clock_t fim = clock();

    printArray(arr, n);
    printf("Tempo: %f\n", (double)(fim - inicio) / CLOCKS_PER_SEC);

    return 0;
}