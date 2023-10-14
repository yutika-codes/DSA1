#include <stdio.h>
#include "dijkstras.h"

int main() {
    int V = 5;  // Number of vertices
    struct Graph* graph = createGraph(V);

    addEdge(graph, 0, 1, 2);
    addEdge(graph, 0, 3, 1);
    addEdge(graph, 1, 2, 4);
    addEdge(graph, 1, 3, 3);
    addEdge(graph, 2, 4, 5);
    addEdge(graph, 3, 4, 7);

    int src = 0;
    int dist[V];
    int parent[V];

    dijkstra(graph, src, dist, parent);

    printf("Shortest Path from %d:\n", src);
    for (int i = 0; i < V; i++) {
        printf("Vertex %d -> Distance: %d, Parent: %d\n", i, dist[i], parent[i]);
    }

    return 0;
}
