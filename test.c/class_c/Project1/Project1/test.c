#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>
#define ROW 10
#define COL 10

typedef struct {
    int x, y;
    int px, py;
} Node;

Node queue[1000];
int vis[ROW][COL];
int front = 0, rear = 0;

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

int dx[] = { -1, 1, 0, 0 };
int dy[] = { 0, 0, -1, 1 };

void printPath(Node q[], int idx) {
    if (q[idx].px == -1 && q[idx].py == -1) {
        printf("(%d,%d)", q[idx].x, q[idx].y);
        return;
    }
    for (int i = 0; i < rear; i++) {
        if (q[i].x == q[idx].px && q[i].y == q[idx].py) {
            printPath(q, i);
            break;
        }
    }
    printf(" -> (%d,%d)", q[idx].x, q[idx].y);
}

void bfs(int sx, int sy, int ex, int ey) {
    memset(vis, 0, sizeof(vis));
    front = rear = 0;
    Node start = { sx, sy, -1, -1 };
    queue[rear++] = start;
    vis[sx][sy] = 1;

    while (front < rear) {
        Node cur = queue[front++];
        if (cur.x == ex && cur.y == ey) {
            printf("BFS ×î¶ÌÂ·¾¶£º\n");
            printPath(queue, front - 1);
            printf("\n");
            return;
        }
        for (int d = 0; d < 4; d++) {
            int nx = cur.x + dx[d];
            int ny = cur.y + dy[d];
            if (nx >= 0 && nx < ROW && ny >= 0 && ny < COL && maze[nx][ny] == 0 && !vis[nx][ny]) {
                vis[nx][ny] = 1;
                Node t = { nx, ny, cur.x, cur.y };
                queue[rear++] = t;
            }
        }
    }
}

int main() {
    bfs(1, 1, 8, 8);
    return 0;
}