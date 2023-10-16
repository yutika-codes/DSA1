#ifndef DIJKSTRAS_H
#define DIJKSTRAS_H

#define INFINITY 9999
#define MAX_NODES 100

struct Graph {
    int V;          // Number of vertices
    int E;          // Number of edges
    int adj[MAX_NODES][MAX_NODES];  // Adjacency matrix
};

struct Graph* createGraph(int V);
void addEdge(struct Graph* graph, int src, int dest, int weight);
void dijkstra(struct Graph* graph, int src, int dist[], int parent[]);

#endif // GRAPH_H
