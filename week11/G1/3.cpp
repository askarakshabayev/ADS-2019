#include <iostream>
#include <vector>
#include <queue>

using namespace std;
vector<int> g[100];
int n, m, x, y;
queue<int> q;
int d[100];
int used[100];

void bfs(int x) {
    q.push(x);
    d[x] = 0;
    used[x] = 1;
    while (!q.empty()) {
        x = q.front();
        for (int i = 0; i < g[x].size(); i++) {
            y = g[x][i];
            if (used[y] == 0) {
                used[y] = 1;
                d[y] = d[x] + 1;
                q.push(y);
            }
        }
        q.pop();
    }
}

int main() {
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    for (int t = 0; t < n; t++) {
        if (used[t] == 0)
            bfs(t);
    }

    for (int i = 0; i < n; i++)
        cout << i << " -> " << d[i] << endl;

    return 0;
}