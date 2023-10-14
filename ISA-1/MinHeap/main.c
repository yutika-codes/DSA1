#include "priority.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
    // Initialize a priority queue with a capacity (e.g., 10)
    struct PriorityQueue* pq = createPriorityQueue(10);

    // Read input from a file
    FILE* file = fopen("input.txt", "r");
    if (file == NULL) {
        printf("File not found or unable to open.\n");
        return 1;
    }

    char name;
    int frequency;// Read elements from the file and insert them into the priority queue
    while (fscanf(file, " %c %d", &name, &frequency) != EOF) {
        struct Element e = createElement(name, frequency);
        insert(pq, e);
    }

    fclose(file);

    // Extract and print elements in order of priority
    while (pq->size > 0) {
        struct Element e = extractMin(pq);
        printf("%c: %d\n", e.name, e.frequency);
    }

    // Free allocated memory
    free(pq->array);
    free(pq);

    return 0;
}