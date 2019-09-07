#include <iostream>
#include <queue>

using namespace std;
int a[100][100];
int n, m;
int x, y, x_end, y_end;
queue<pair<int, int> > q;
// int dx[4] = {0,  0, 1, -1};
// int dy[4] = {1, -1, 0,  0};
int dx[8] = {1,  1, -1, -1, 2,  2, -2, -2};
int dy[8] = {2, -2, 2,  -2, 1, -1,  1, -1};

bool check(int x, int y) {
    return (x >= 0 && x < n && y >= 0 && y < m);
}

int main() {
    cin >> n >> m;
    cin >> x >> y >> x_end >> y_end;
    q.push(make_pair(x, y));
    a[x][y] = 1;
    while (!q.empty()) {
        pair<int, int> front = q.front();
        int x = front.first;
        int y = front.second;
        q.pop();
        for (int i = 0; i < 8; i++) {
            int x1 = x + dx[i];
            int y1 = y + dy[i];
            if (check(x1, y1) && a[x1][y1] == 0) {
                q.push(make_pair(x1, y1));
                a[x1][y1] = a[x][y] + 1;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
    cout << a[x_end][y_end];
    return 0;
}