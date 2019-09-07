#include <iostream>
#include <queue>

using namespace std;

queue<pair<int, int> > q;
int a[100][100];
int n, m, row, col, row1, col1;

// int dr[4] = {1, -1, 0, 0};
// int dc[4] = {0, 0,  1, -1};
int dr[8] = {1, 1, -1, -1, 2, 2, -2, -2};
int dc[8] = {2, -2, 2, -2, 1, -1, 1, -1};

bool check(int r, int c) {
    return (r >= 0 && r < n && c >= 0 && c < m);
} 

int main() {
    cin >> n >> m;
    // for (int i = 0; i < n; i++)
    //     for (int j = 0; j < m; j++)
    //         cin >> a[i][j];
    cin >> row >> col >> row1 >> col1;
    a[row][col] = 1;
    q.push(make_pair(row, col));

    while (!q.empty()) {
        pair<int, int> cur = q.front();
        int r = cur.first;
        int c = cur.second;

        for (int i = 0; i < 8; i++) {
            if (check(r + dr[i], c + dc[i])){
                if (a[r + dr[i]][c + dc[i]] == 0) {
                    q.push(make_pair(r + dr[i], c + dc[i]));
                    a[r + dr[i]][c + dc[i]] = a[r][c] + 1;
                }
            }
        }
        // if (c + 1 < m && a[r][c + 1] == 0) {
        //     q.push(make_pair(r, c + 1));
        //     a[r][c + 1] = a[r][c] + 1;
        // }
        // if (c - 1 >= 0 && a[r][c - 1] == 0) {
        //     q.push(make_pair(r, c - 1));
        //     a[r][c - 1] = a[r][c] + 1;
        // }
        // if (r + 1 < n && a[r + 1][c] == 0) {
        //     q.push(make_pair(r + 1, c));
        //     a[r + 1][c] = a[r][c] + 1;
        // }
        // if (r - 1 >= 0 && a[r - 1][c] == 0) {
        //     q.push(make_pair(r - 1, c));
        //     a[r - 1][c] = a[r][c] + 1;
        // }
        q.pop();
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) 
            cout << a[i][j] << " ";
        cout << endl;
    }
    cout << a[row1][col1] - 1;

    return 0;
}