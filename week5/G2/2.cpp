#include <iostream>

using namespace std;
int n, k;
int b[10];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> k;
        b[k]++;
    }

    for (int i = 0; i < 10; i++) 
        for (int j = 0; j < b[i]; j++)
            cout << i << " ";

    return 0;
}