#include <iostream>

using namespace std;

int g[100][100];

int main() {
    int n, x, y, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        cin >> x >> y;
        g[x][y] = 1;
        g[y][x] = 1;        
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << g[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}