#include <iostream>
#include <vector>
#include <algorithm>
#define pb push_back
#define mp make_pair

using namespace std;
vector<pair<int, pair<int, int> > > g;
int p[100];
int r[100];
int n, m, x, y, l;

int find(int v) {
    if (v == p[v])
        return v;
    p[v] = find(p[v]);
    return p[v];
}

void union_set(int v, int u) {
    v = find(v);
    u = find(u);
    if (r[v] > r[u])
        p[u] = v;
    else if (r[v] < r[u])
        p[v] = u;
    else {
        p[u] = v;
        r[v]++;
    }
}

int main() {
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        cin >> x >> y >> l;
        x--;
        y--;
        g.push_back(mp(l, mp(x, y)));
    }
    sort(g.begin(), g.end());
    for (int i = 0; i < n; i++)
        p[i] = i;
    for (int i = 0; i < m; i++) {
        x = g[i].second.first;
        y = g[i].second.second;
        if (find(x) != find(y)) {
            union_set(x, y);
            cout << x + 1 << " " << y + 1 << endl;
        }
    }


    return 0;
}