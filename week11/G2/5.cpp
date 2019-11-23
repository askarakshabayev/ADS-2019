#include <iostream>
#include <vector>

using namespace std;
vector<int> g[100];
int used[100];
int n, m, x, y;
bool ok = true;
void dfs(int v, int c) {
    used[v] = c;
    for (int i = 0; i < g[v].size(); i++) {
        y = g[v][i];
        if (used[y] == 0)
            dfs(y, 3 - c);
        else if (used[y] == c) {
            ok = false;
        }
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
    int cnt = 0;
    for (int i = 0; i < n; i++)
        if (used[i] == 0) {
            cnt++;
            dfs(i, 1);
        }
    return 0;
}