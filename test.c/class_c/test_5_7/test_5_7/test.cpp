//#include <iostream>
//#include <vector>
//#include <climits>
//using namespace std;
//
//#define MAXVAL INT_MAX  // 用 INT_MAX 表示无穷大
//
//class Graph {
//private:
//    int vexNum;                     // 顶点数
//    vector<vector<int>> arc;        // 邻接矩阵
//
//public:
//    Graph(int n) : vexNum(n), arc(n, vector<int>(n, MAXVAL)) {
//        for (int i = 0; i < n; i++) {
//            arc[i][i] = 0;
//        }
//    }
//    void addEdge(int u, int v, int weight) {
//        arc[u][v] = weight;
//        arc[v][u] = weight;
//    }
//    void MST_Prim() {
//        vector<int> lowcost(vexNum); 
//        vector<int> adjvex(vexNum);   
//
//        // 初始化：以顶点0为起点
//        lowcost[0] = 0;
//        adjvex[0] = 0;
//        for (int i = 1; i < vexNum; i++) {
//            lowcost[i] = arc[0][i];
//            adjvex[i] = 0;
//        }
//
//        // 主循环：找 n-1 条边
//        for (int i = 1; i < vexNum; i++) {
//            int minCost = MAXVAL;
//            int k = -1;
//
//            // 寻找未加入MST且权值最小的顶点
//            for (int j = 1; j < vexNum; j++) {
//                if (lowcost[j] != 0 && lowcost[j] < minCost) {
//                    minCost = lowcost[j];
//                    k = j;
//                }
//            }
//
//            // 如果找不到下一个顶点（图不连通）
//            if (k == -1) {
//                cout << "图不连通，无法生成最小生成树！" << endl;
//                return;
//            }
//
//            // 输出选中的边
//            cout << "(V" << adjvex[k] << ", V" << k << ") ";
//
//            // 将顶点 k 加入 MST
//            lowcost[k] = 0;
//
//            // 更新 lowcost 和 adjvex
//            for (int j = 1; j < vexNum; j++) {
//                if (lowcost[j] != 0 && arc[k][j] < lowcost[j]) {
//                    lowcost[j] = arc[k][j];
//                    adjvex[j] = k;
//                }
//            }
//        }
//        cout << endl;
//    }
//};
//
//// 测试用例
//int main() {
//    // 创建一个包含6个顶点的图
//    Graph g(6);
//    g.addEdge(0, 1, 6);
//    g.addEdge(0, 2, 1);
//    g.addEdge(0, 3, 5);
//    g.addEdge(1, 2, 5);
//    g.addEdge(1, 4, 3);
//    g.addEdge(2, 3, 5);
//    g.addEdge(2, 4, 6);
//    g.addEdge(2, 5, 4);
//    g.addEdge(3, 5, 2);
//    g.addEdge(4, 5, 6);
//
//    cout << "最小生成树的边：";
//    g.MST_Prim();
//
//    return 0;
//}
int Graph::root(int* parent, int vex)
{
	while (parent[vex] != -1)
	{
		vex = parent[vex];
	}
	return vex;
}
void  Graph::MST_Kruskal() {
	Edge edges[vexNum * vexNum];
	int edgeNum = 0;
	int cnt = 0;
	int parent[vexNum];
	for (int i = 0; i < vexNum; i++)
	{
		parent[i] = -1;

	}
	for (int i = 0; i < vexNum; i++)
	{
		for (int j = 0; j < vexNum; j++)
		{
			if (arc[i][j] != MAXVAL)
			{
				edges[edgeNum].from = i;
				edges[edgeNum].to = j;
				edges[edgeNum++].weight =arc[i][j];

			}
		}
	}
	sort(edges, edges + edgeNum, edge_cmp);
	for (int i = 0;; i++)
	{
		intg rt1 = root(parenet, edges[i].from);
		int rt2 = root(parents, edges[i].to);
		if (rt1 != rt2)
		{
			cout << "edge from:V" << edges[i].from << "edge to:V<<edges[i].to<<"
				weight: << edges[i].weighet.weighet << endl;]
				parenet[rt2] = rt1;
				cnt++; \
					if (cnt == vexNum - 1)brrak;
		}
	}
}