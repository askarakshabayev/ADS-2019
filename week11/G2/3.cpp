#include <iostream>
#include <vector>
#include <queue>

using namespace std;
vector<int> g[100];
int used[100];
int d[100];
queue<int> q;
int n, m, x, y;

void bfs(int v) {
    q.push(v);
    used[v] = 1;
    d[v] = 0;

    while (!q.empty()) {
        x = q.front();
        for (int i = 0; i < g[x].size(); i++) {
            y = g[x][i];
            if (used[y] == 0) {
                q.push(y);
                used[y] = 1;
                d[y] = d[x] + 1;
            }
        }
        q.pop();
    }
}

int main() {
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        cin >> x >> y;
        x--;
        y--;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    bfs(0);
    for (int i = 0; i < n; i++) {
        cout << i << " -- " << d[i] << endl;
    }
    return 0;
}