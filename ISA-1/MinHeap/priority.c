#include "priority.h"
#include <stdlib.h>
#include <stdio.h>
struct Element createElement(char name, int frequency) {
    struct Element e;
    e.name = name;
    e.frequency = frequency;
    return e;
}

// Function to create a new priority queue
struct PriorityQueue* createPriorityQueue(int capacity) {
    struct PriorityQueue* pq = (struct PriorityQueue*)malloc(sizeof(struct PriorityQueue));
    pq->capacity = capacity;
    pq->size = 0;
    pq->array = (struct Element*)malloc(capacity * sizeof(struct Element));
    return pq;
}

// Function to swap two elements
void swap(struct Element* a, struct Element* b) {
    struct Element temp = *a;
    *a = *b;
    *b = temp;
}
// Function to heapify a subtree rooted with the element at index i
void minHeapify(struct PriorityQueue* pq, int i) {
    int smallest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < pq->size && pq->array[left].frequency < pq->array[smallest].frequency)
        smallest = left;
    if (right < pq->size && pq->array[right].frequency < pq->array[smallest].frequency)
        smallest = right;

    if (smallest != i) {
        swap(&pq->array[i], &pq->array[smallest]);
        minHeapify(pq, smallest);
    }
}

// Function to insert an element into the priority queue
void insert(struct PriorityQueue* pq, struct Element e) {
    if (pq->size == pq->capacity) {
        printf("Priority queue is full. Cannot insert more elements.\n");
        return;
    }

    int i = pq->size;
    pq->array[i] = e;

    while (i > 0 && pq->array[(i - 1) / 2].frequency > pq->array[i].frequency) {
        swap(&pq->array[i], &pq->array[(i - 1) / 2]);
        i = (i - 1) / 2;
    }

    pq->size++;
}

// Function to extract the element with the highest priority
struct Element extractMin(struct PriorityQueue* pq) {
    if (pq->size <= 0) {
        struct Element emptyElement = {'\0', 0};
        return emptyElement;
    }
    if (pq->size == 1) {
        pq->size--;
        return pq->array[0];
    }

    struct Element root = pq->array[0];
    pq->array[0] = pq->array[pq->size - 1];
    pq->size--;
    minHeapify(pq, 0);

    return root;
}