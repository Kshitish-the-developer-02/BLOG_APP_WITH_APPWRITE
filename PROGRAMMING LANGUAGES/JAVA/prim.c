#include <stdio.h>
#include <limits.h>

#define V 5

int minKey(int key[], int mstSet[]) {
  int min = INT_MAX, min_index;

  for (int i = 0; i < V; i++) {
    if (mstSet[i] == 0 && key[i] < min) {
      min = key[i];
      min_index = i;
    }
  }

  return min_index;
}

void primMST(int graph[V][V]) {
  int parent[V];
  int key[V];
  int mstSet[V];

  for (int i = 0; i < V; i++) {
    key[i] = INT_MAX;
    mstSet[i] = 0;
  }

  key[0] = 0;
  parent[0] = -1;

  for (int i = 0; i < V - 1; i++) {
    int u = minKey(key, mstSet);

    mstSet[u] = 1;

    for (int v = 0; v < V; v++) {
      if (graph[u][v] > 0 && mstSet[v] == 0 && graph[u][v] < key[v]) {
        key[v] = graph[u][v];
        parent[v] = u;
      }
    }
  }

  // Print the MST
  for (int i = 1; i < V; i++) {
    printf("(%d, %d) %d\n", parent[i], i, graph[parent[i]][i]);
  }
}

int main() {
  int graph[V][V];
  int n, e;

  printf("Enter the number of vertices: ");
  scanf("%d", &n);

  printf("Enter the number of edges: ");
  scanf("%d", &e);

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      graph[i][j] = 0;
    }
  }

  for (int i = 0; i < e; i++) {
    int u, v, w;

    printf("Enter the start vertex, end vertex and weight of edge %d: ", i + 1);
    scanf("%d %d %d", &u, &v, &w);

    graph[u][v] = w;
    graph[v][u] = w;
  }

  primMST(graph);

  return 0;
}