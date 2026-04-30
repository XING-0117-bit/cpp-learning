#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// 邻接表节点
typedef struct AdjNode {
    int dest;
    struct AdjNode* next;
} AdjNode;

// 图结构
typedef struct Graph {
    int V;               // 顶点数
    AdjNode** array;     // 邻接表数组
    bool* visited;       // 访问标记数组（可选放在外部）
} Graph;

// 创建图
Graph* createGraph(int V) {
    Graph* g = (Graph*)malloc(sizeof(Graph));
    g->V = V;
    g->array = (AdjNode**)malloc(V * sizeof(AdjNode*));
    g->visited = (bool*)malloc(V * sizeof(bool));
    for (int i = 0; i < V; i++) {
        g->array[i] = NULL;
        g->visited[i] = false;
    }
    return g;
}

// 添加边（无向图）
void addEdge(Graph* g, int src, int dest) {
    AdjNode* newNode = (AdjNode*)malloc(sizeof(AdjNode));
    newNode->dest = dest;
    newNode->next = g->array[src];
    g->array[src] = newNode;

    // 如果是无向图，再加反向边
    newNode = (AdjNode*)malloc(sizeof(AdjNode));
    newNode->dest = src;
    newNode->next = g->array[dest];
    g->array[dest] = newNode;
}

// 递归 DFS
void DFSRecursive(Graph* g, int v) {
    g->visited[v] = true;
    printf("%d ", v);

    AdjNode* neighbor = g->array[v];
    while (neighbor != NULL) {
        int u = neighbor->dest;
        if (!g->visited[u]) {
            DFSRecursive(g, u);
        }
        neighbor = neighbor->next;
    }
}

// 调用入口（重置 visited 后从某个顶点开始）
void runDFS(Graph* g, int start) {
    // 重置 visited
    for (int i = 0; i < g->V; i++) g->visited[i] = false;
    DFSRecursive(g, start);
}

int main() {
    int V = 5;
    Graph* g = createGraph(V);
    addEdge(g, 0, 1);
    addEdge(g, 0, 2);
    addEdge(g, 1, 3);
    addEdge(g, 1, 4);

    printf("DFS from vertex 0: ");
    runDFS(g, 0);
    // 输出: 0 1 3 4 2  (顺序取决于邻接表顺序)
    return 0;
}
