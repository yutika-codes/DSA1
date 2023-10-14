#include <stdio.h>
#include <stdlib.h>
#include "heapsort.h"

int main() {
    // Example for sorting integers
    int intArr[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(intArr) / sizeof(intArr[0]);
    heapSort(intArr, n, sizeof(intArr[0]), compareInt);
    printf("Sorted integers: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", intArr[i]);
    }
    printf("\n");

    // Example for sorting characters
    char charArr[] = "heapSort";
    n = strlen(charArr);
    heapSort(charArr, n, sizeof(charArr[0]), compareChar);
    printf("Sorted characters: %s\n", charArr);

    return 0;
}

int main() {
    // Example for sorting integers
    int intArr[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(intArr) / sizeof(intArr[0]);
    heapSort(intArr, n, sizeof(intArr[0]), compareInt);
    printf("Sorted integers: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", intArr[i]);
    }
    printf("\n");

    // Example for sorting characters
    char charArr[] = "heapSort";
    n = strlen(charArr);
    heapSort(charArr, n, sizeof(charArr[0]), compareChar);
    printf("Sorted characters: %s\n", charArr);

    return 0;
}