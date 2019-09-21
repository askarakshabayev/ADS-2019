#include <iostream>

using namespace std;
int p[1000000];

int main() {
    
    int n;
    cin >> n;
    // i = 4
    // k = 3
    for (int i = 2; i * i <= n; i++) 
        if (p[i] == 0) {
            int k = i;
            while (k + i <= n) {
                k += i;
                p[k] = 1;
            }
        }
    for (int i = 2; i <= n; i++)
        if (p[i] == 0)
            cout << i << " ";
    return 0;
}