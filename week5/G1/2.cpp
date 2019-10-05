#include <iostream>

using namespace std;
int b[10];

int main() {
    int n, k;
    cin >> n;
    // n = 10
    // i = 0
    // k = 
    for (int i = 0; i < n; i++) {
        cin >> k;
        b[k]++;
    }

    // for (int i = 0; i < 10; i++) {
    //     cout << b[i] << " ";
    // }
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < b[i]; j++) {
            cout << i << " ";
        }
    }

    return 0;
}