#ifndef HEAPSORT_H
#define HEAPSORT_H

void heapify(void *arr, int n, int i, size_t size, int (*compare)(const void *, const void *));
void heapSort(void *arr, int n, size_t size, int (*compare)(const void *, const void *));

int compareChar(const void *a, const void *b);
int compareInt(const void *a, const void *b);

#endif