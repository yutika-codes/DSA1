#include "dijkstras.h"

struct Graph* createGraph(int V) {
    struct Graph* graph = (struct Graph*)malloc(sizeof(struct Graph));
    graph->V = V;
    graph->E = 0;

    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            graph->adj[i][j] = 0;
        }
    }

    return graph;
}

void addEdge(struct Graph* graph, int src, int dest, int weight) {
    graph->adj[src][dest] = weight;
    graph->adj[dest][src] = weight;  // For undirected graph
    graph->E++;
}

void dijkstra(struct Graph* graph, int src, int dist[], int parent[]) {
    int V = graph->V;
    int visited[V];

    for (int i = 0; i < V; i++) {
        dist[i] = INFINITY;
        visited[i] = 0;
    }

    dist[src] = 0;
    parent[src] = -1;

    for (int count = 0; count < V - 1; count++) {
        int u = -1;

        for (int v = 0; v < V; v++) {
            if (!visited[v] && (u == -1 || dist[v] < dist[u])) {
                u = v;
            }
        }

        visited[u] = 1;

        for (int v = 0; v < V; v++) {
            if (!visited[v] && graph->adj[u][v] && dist[u] + graph->adj[u][v] < dist[v]) {
                dist[v] = dist[u] + graph->adj[u][v];
                parent[v] = u;
            }
        }
    }
}
