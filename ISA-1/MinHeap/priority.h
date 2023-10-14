#ifndef PRIORITY_H
#define PRIORITY_H

// Structure to represent an element in the priority queue
struct Element {
    char name;
    int frequency;
};

// Structure to represent the priority queue
struct PriorityQueue {
    struct Element* array;
    int capacity;
    int size;
};

struct Element createElement(char name, int frequency);
struct PriorityQueue* createPriorityQueue(int capacity);
void swap(struct Element* a, struct Element* b);
void minHeapify(struct PriorityQueue* pq, int i);
void insert(struct PriorityQueue* pq, struct Element e);
struct Element extractMin(struct PriorityQueue* pq);

#endif