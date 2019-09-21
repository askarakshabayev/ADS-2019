#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int res = 1;
    for (int i = 1; i <= b; i++)
        res *= a;
    cout << res;
    return 0;
    
}