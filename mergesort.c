#include <stdio.h>
#include <time.h>

void printArray(int arr[], int n){
    int i;
    
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void merge(int arr[], int l, int m, int r){
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1], R[n2];

    for(i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for(j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    i = 0; j = 0; k = l;

    while(i < n1 && j < n2) {
        if(L[i] <= R[j])
            arr[k++] = L[i++];
        else
            arr[k++] = R[j++];
    }

    while(i < n1)
        arr[k++] = L[i++];

    while(j < n2)
        arr[k++] = R[j++];
}

void mergeSort(int arr[], int l, int r){
    if(l < r) {
        int m = (l + r) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}

int main() {
    int arr[] = {9,5,2,7,1,8,3,6,4,0};
    int n = 10;

    clock_t inicio = clock();

    mergeSort(arr, 0, n - 1);

    clock_t fim = clock();

    printArray(arr, n);
    printf("Tempo: %f\n", (double)(fim - inicio) / CLOCKS_PER_SEC);

    return 0;
}