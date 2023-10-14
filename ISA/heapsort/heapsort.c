#include <stdio.h>
#include "heapsort.h"

// Define a comparator function for characters
int compareChar(const void *a, const void *b) {
    return *(char *)a - *(char *)b;
}

// Define a comparator function for integers
int compareInt(const void *a, const void *b) {
    return *(int *)a - *(int *)b;
}

void heapify(void *arr, int n, int i, size_t size, int (*compare)(const void *, const void *)) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && compare((char *)arr + left * size, (char *)arr + largest * size) > 0)
        largest = left;

    if (right < n && compare((char *)arr + right * size, (char *)arr + largest * size) > 0)
        largest = right;

    if (largest != i) {
        char temp[size];
        memcpy(temp, (char *)arr + i * size, size);
        memcpy((char *)arr + i * size, (char *)arr + largest * size, size);
        memcpy((char *)arr + largest * size, temp, size);

        heapify(arr, n, largest, size, compare);
    }
}

void heapSort(void *arr, int n, size_t size, int (*compare)(const void *, const void *)) {
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i, size, compare);

    for (int i = n - 1; i > 0; i--) {
        char temp[size];
        memcpy(temp, (char *)arr, size);
        memcpy((char *)arr, (char *)arr + i * size, size);
        memcpy((char *)arr + i * size, temp, size);

        heapify(arr, i, 0, size, compare);
    }
}

