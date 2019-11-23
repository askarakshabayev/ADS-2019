#include <iostream>
#include <vector>

using namespace std;

vector<int> g[100];
int used[100];
int n, m, x, y, cnt;

bool ok;
void dfs(int v, int c) {
    used[v] = c;
    for (int i = 0; i < g[v].size(); i++) {        
        y = g[v][i];
        // v -> y
        if (used[y] == 0)
            dfs(y, 3 - c);
        else {
            if (c == used[y]) {
                ok = false;
            }
        }
    }
}

int main() {
    ok = true;
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    cnt = 0;
    for (int i = 0; i < n; i++)
        if (used[i] == 0) {
            cnt++;
            dfs(i);
        }
    cout << cnt;
    return 0;
}