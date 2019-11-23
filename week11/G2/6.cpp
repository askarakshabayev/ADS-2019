#include <iostream>
#include <vector>

using namespace std;
int used[100];
int n;
vector<int> a;

void dfs(int v) {
    used[v] = 1;
    a.push_back(v);
    
    if (a.size() == n + 1) {
        for (int i = 1; i <= n; i++)
            cout << a[i] << " ";
        cout << endl;
    }

    for (int i = 1; i <= n; i++) 
        if (used[i] == 0) {
            dfs(i);
        }
    
    
    used[v] = 0;
    a.pop_back();
}

int main() {
    cin >> n;
    dfs(0);
    return 0;
}