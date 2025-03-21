// ! 8. Write a program to find minimum cost spanning tree using Kruskal’s Algorithm.

#include <iostream>
#include <algorithm>

using namespace std;

struct Edge {
    int src, dest, weight;
};

struct Subset {
    int parent, rank;
};

int find(Subset subsets[], int i) {
    if (subsets[i].parent != i)
        subsets[i].parent = find(subsets, subsets[i].parent);
    return subsets[i].parent;
}

void Union(Subset subsets[], int x, int y) {
    int xroot = find(subsets, x);
    int yroot = find(subsets, y);

    if (subsets[xroot].rank < subsets[yroot].rank)
        subsets[xroot].parent = yroot;
    else if (subsets[xroot].rank > subsets[yroot].rank)
        subsets[yroot].parent = xroot;
    else {
        subsets[yroot].parent = xroot;
        subsets[xroot].rank++;
    }
}

bool compareEdges(Edge a, Edge b) {
    return a.weight < b.weight;
}

void KruskalMST(Edge edges[], int E, int V) {
    sort(edges, edges + E, compareEdges);

    Edge* result = new Edge[V - 1];
    Subset* subsets = new Subset[V];
    for (int v = 0; v < V; ++v) {
        subsets[v].parent = v;
        subsets[v].rank = 0;
    }

    int e = 0;
    for (int i = 0; e < V - 1 && i < E; ++i) {
        int x = find(subsets, edges[i].src);
        int y = find(subsets, edges[i].dest);

        if (x != y) {
            result[e++] = edges[i];
            Union(subsets, x, y);
        }
    }

    cout << "Edges in the Minimum Cost Spanning Tree:\n";
    for (int i = 0; i < e; ++i)
        cout << result[i].src << " -- " << result[i].dest << " == " << result[i].weight << endl;

    delete[] result;
    delete[] subsets;
}

int main() {
    int V = 4;
    int E = 5;
    Edge edges[] = {
        {0, 1, 10}, {0, 2, 6}, {0, 3, 5}, {1, 3, 15}, {2, 3, 4}
    };

    KruskalMST(edges, E, V);

    return 0;
}