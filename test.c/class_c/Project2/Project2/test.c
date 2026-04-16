#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define ROW 10
#define COL 10

// 上下左右四个方向
int dx[] = { -1, 1, 0, 0 };
int dy[] = { 0, 0, -1, 1 };

// 迷宫地图（与BFS完全一致，保证路径可复现）
int maze[ROW][COL] = {
    {1,1,1,1,1,1,1,1,1,1},
    {1,0,0,1,0,0,0,1,0,1},
    {1,0,0,1,0,0,1,0,0,1},
    {1,1,0,0,0,1,1,1,0,1},
    {1,0,0,1,1,1,0,0,0,1},
    {1,0,1,0,0,0,0,1,0,1},
    {1,0,0,0,1,0,1,1,0,1},
    {1,1,1,0,1,0,0,0,0,1},
    {1,0,0,0,0,0,1,0,0,1},
    {1,1,1,1,1,1,1,1,1,1}
};

// 节点结构体：存储坐标、代价、父节点、访问状态
typedef struct {
    int x, y;
    int g;      // 起点到当前节点的实际步数
    int h;      // 曼哈顿距离（启发函数）
    int f;      // f = g + h
    int px, py; // 父节点坐标
    bool inClose; // 是否在CLOSED表（已扩展）
} Node;

Node node[ROW][COL];
int start_x = 1, start_y = 1;
int end_x = 8, end_y = 8;

// 初始化所有节点：修正了g值初始化为无穷大，避免0值干扰
void initNode() {
    int i, j;
    for (i = 0; i < ROW; i++) {
        for (j = 0; j < COL; j++) {
            node[i][j].x = i;
            node[i][j].y = j;
            node[i][j].g = 99999;  // 初始化为极大值，仅起点设为0
            node[i][j].h = abs(i - end_x) + abs(j - end_y);
            node[i][j].f = node[i][j].g + node[i][j].h;
            node[i][j].px = -1;
            node[i][j].py = -1;
            node[i][j].inClose = false;
        }
    }
    // 单独初始化起点
    node[start_x][start_y].g = 0;
    node[start_x][start_y].f = node[start_x][start_y].g + node[start_x][start_y].h;
}

// 从OPEN表中选取f值最小的节点
int findMinNode(int* mx, int* my) {
    int minF = 99999;
    *mx = -1; *my = -1;
    int i, j;
    for (i = 0; i < ROW; i++) {
        for (j = 0; j < COL; j++) {
            // 仅筛选：未在CLOSED表、可通行、f值更小的节点
            if (!node[i][j].inClose && maze[i][j] == 0 && node[i][j].f < minF) {
                minF = node[i][j].f;
                *mx = i;
                *my = j;
            }
        }
    }
    return (*mx != -1);
}

// 递归回溯打印完整路径（修正了终止条件）
void printPath(int x, int y) {
    // 递归终止：到达起点（父节点为-1,-1）
    if (node[x][y].px == -1 && node[x][y].py == -1) {
        printf("(%d,%d)", x, y);
        return;
    }
    // 先递归打印父节点，再打印当前节点，保证路径顺序正确
    printPath(node[x][y].px, node[x][y].py);
    printf(" -> (%d,%d)", x, y);
}

// A*算法主逻辑
void aStarSearch() {
    initNode();
    int x, y;

    while (1) {
        // 从OPEN表取f最小的节点
        if (!findMinNode(&x, &y)) {
            printf("\nA* 搜索：迷宫无解！\n");
            return;
        }

        // 将节点移入CLOSED表
        node[x][y].inClose = true;

        // 到达终点，打印路径
        if (x == end_x && y == end_y) {
            printf("\nA* 最短路径：\n");
            printPath(x, y);
            printf("\n");
            return;
        }

        // 扩展四个方向的邻居节点
        for (int d = 0; d < 4; d++) {
            int nx = x + dx[d];
            int ny = y + dy[d];

            // 边界、障碍物、已扩展节点过滤
            if (nx < 0 || nx >= ROW || ny < 0 || ny >= COL) continue;
            if (maze[nx][ny] == 1 || node[nx][ny].inClose) continue;

            // 计算新的g值：当前节点g+1
            int newG = node[x][y].g + 1;
            // 仅当新g值更小（找到更优路径）时，更新节点信息
            if (newG < node[nx][ny].g) {
                node[nx][ny].g = newG;
                node[nx][ny].f = node[nx][ny].g + node[nx][ny].h;
                node[nx][ny].px = x;
                node[nx][ny].py = y;
            }
        }
    }
}

int main() {
    printf("A* 算法求解迷宫（起点：(%d,%d)，终点：(%d,%d)）\n", start_x, start_y, end_x, end_y);
    aStarSearch();
    return 0;
}