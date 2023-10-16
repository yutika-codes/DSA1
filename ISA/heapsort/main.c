
#include <stdio.h>
#include "heapsort.h"

int main() {
    int intArr[] = {4, 10, 3, 5, 1};
    char charArr[] = "heap";

    int n = sizeof(intArr) / sizeof(intArr[0]);
    int char_n = sizeof(charArr) - 1; // Length of character array

    printf("Original integer array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", intArr[i]);
    printf("\n");

    printf("Original character array: %s\n", charArr);

    heapSort(intArr, n);
    charHeapSort(charArr, char_n);

    printf("Sorted integer array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", intArr[i]);
    printf("\n");

    printf("Sorted character array: %s\n", charArr);

    return 0;
}
