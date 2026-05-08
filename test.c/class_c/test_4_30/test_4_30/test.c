//#define _CRT_SECURE_NO_WARNINGS 
//#include <stdio.h>
//#include <stdlib.h>
//#include <stdbool.h>
//
//// 邻接表节点
//typedef struct AdjNode {
//    int dest;
//    struct AdjNode* next;
//} AdjNode;
//
//// 图结构
//typedef struct Graph {
//    int V;               // 顶点数
//    AdjNode** array;     // 邻接表数组
//    bool* visited;       // 访问标记数组（可选放在外部）
//} Graph;
//
//// 创建图
//Graph* createGraph(int V) {
//    Graph* g = (Graph*)malloc(sizeof(Graph));
//    g->V = V;
//    g->array = (AdjNode**)malloc(V * sizeof(AdjNode*));
//    g->visited = (bool*)malloc(V * sizeof(bool));
//    for (int i = 0; i < V; i++) {
//        g->array[i] = NULL;
//        g->visited[i] = false;
//    }
//    return g;
//}
//
//// 添加边（无向图）
//void addEdge(Graph* g, int src, int dest) {
//    AdjNode* newNode = (AdjNode*)malloc(sizeof(AdjNode));
//    newNode->dest = dest;
//    newNode->next = g->array[src];
//    g->array[src] = newNode;
//
//    // 如果是无向图，再加反向边
//    newNode = (AdjNode*)malloc(sizeof(AdjNode));
//    newNode->dest = src;
//    newNode->next = g->array[dest];
//    g->array[dest] = newNode;
//}
//
//// 递归 DFS
//void DFSRecursive(Graph* g, int v) {
//    g->visited[v] = true;
//    printf("%d ", v);
//
//    AdjNode* neighbor = g->array[v];
//    while (neighbor != NULL) {
//        int u = neighbor->dest;
//        if (!g->visited[u]) {
//            DFSRecursive(g, u);
//        }
//        neighbor = neighbor->next;
//    }
//}
//
//// 调用入口（重置 visited 后从某个顶点开始）
//void runDFS(Graph* g, int start) {
//    // 重置 visited
//    for (int i = 0; i < g->V; i++) g->visited[i] = false;
//    DFSRecursive(g, start);
//}
//
//int main() {
//    int V = 5;
//    Graph* g = createGraph(V);
//    addEdge(g, 0, 1);
//    addEdge(g, 0, 2);
//    addEdge(g, 1, 3);
//    addEdge(g, 1, 4);
//
//    printf("DFS from vertex 0: ");
//    runDFS(g, 0);
//    // 输出: 0 1 3 4 2  (顺序取决于邻接表顺序)
//    return 0;
//}
#define MAXVAL 65535

void Graph::MST_Prim() {
    int lowcost[vexNum];  // 存储各顶点到当前MST的最小权值
    int adjvex[vexNum];   // 存储各顶点在MST中的邻接点

    // 初始化：以顶点0为起始点
    lowcost[0] = 0;
    adjvex[0] = 0;
    for (int i = 1; i < vexNum; i++) {
        lowcost[i] = arc[0][i];  // 顶点0到各顶点的权值
        adjvex[i] = 0;           // 初始都从顶点0接入
    }

    // 主循环：找 vexNum-1 条边
    for (int i = 1; i < vexNum; i++) {
        int minCost = MAXVAL;
        int k = 0;

        // 寻找未加入MST的顶点中，lowcost最小的顶点k
        for (int j = 1; j < vexNum; j++) {
            if (lowcost[j] != 0 && lowcost[j] < minCost) {
                minCost = lowcost[j];
                k = j;
            }
        }

        // 输出找到的边
        if (k != 0) {
            cout << "(V" << adjvex[k] << ", V" << k << ") ";
        }

        // 将顶点k加入MST
        lowcost[k] = 0;

        // 更新其他顶点到MST的最小权值
        for (int j = 1; j < vexNum; j++) {
            if (lowcost[j] != 0 && arc[k][j] < lowcost[j]) {
                lowcost[j] = arc[k][j];
                adjvex[j] = k;
            }
        }
    }
}