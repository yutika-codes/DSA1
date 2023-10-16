
#include <stdio.h>
#include "heapsort.h"

static void maxHeapify(int arr[], int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest])
        largest = left;

    if (right < n && arr[right] > arr[largest])
        largest = right;

    if (largest != i) {
        int temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;
        maxHeapify(arr, n, largest);
    }
}

static void charMaxHeapify(char arr[], int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest])
        largest = left;

    if (right < n && arr[right] > arr[largest])
        largest = right;

    if (largest != i) {
        char temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;
        charMaxHeapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--)
        maxHeapify(arr, n, i);

    for (int i = n - 1; i > 0; i--) {
        int temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;
        maxHeapify(arr, i, 0);
    }
}

void charHeapSort(char arr[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--)
        charMaxHeapify(arr, n, i);

    for (int i = n - 1; i > 0; i--) {
        char temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;
        charMaxHeapify(arr, i, 0);
    }
}


