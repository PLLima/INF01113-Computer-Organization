#include <stdio.h>
#include <stdlib.h>

#define N 1200000

int binary_search(int arr[], int size, int key) {
    int left = 0, right = size - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key) return mid;
        if (arr[mid] < key) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

int main() {
    int *arr = (int*)malloc(N * sizeof(int));
    for (int i = 0; i < N; i++) {
        arr[i] = i;  // vetor ordenado para busca
    }

    int key = N-1;
    int result = binary_search(arr, N, key);
    printf("Done Binary Search. Found at index: %d\n", result);

    free(arr);
    return 0;
}