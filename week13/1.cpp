#include <iostream>
#include <vector>
#define pb push_back
#define mp make_pair

using namespace std;
vector<pair<int, int> > g[100];
bool used[100];
int d[100];
int c[100];
int n, m, x, y, l;

int main() {
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        cin >> x >> y >> l;
        x--;
        y--;
        g[x].pb(mp(y, l));
        g[y].pb(mp(x, l));
    }

    for (int i = 0; i < n; i++) {
        d[i] = -1;
        d[0] = 0;
    }

    for (int i = 0; i < n; i++) {
        int v = -1;
        for (int j = 0; j < n; j++)
            if (used[j] == false)
                if (v == -1 || d[v] > d[j])
                    v = j;
        used[v] = true;
        for (int j = 0; j < g[v].size(); j++) {
            int u = g[v][j].first;
            l = g[v][j].second;
            if (d[u] == -1 || d[u] > l) {
                d[u] = l;
                c[u] = v;
            }
        }
    }
    for (int i = 0; i < n; i++)
        if (c[i] != i)
            cout << i + 1 << " " << c[i] + 1 << endl;

    return 0;
}