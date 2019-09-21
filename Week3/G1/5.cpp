#include <iostream>

using namespace std;

int a[10000];

int main() {
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++) 
        if (a[i] == k)
            cout << i << " ";
    return 0;
}