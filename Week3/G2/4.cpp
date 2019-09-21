// a, b, k 
#include <iostream>

using namespace std;

int main() {
    int a, b, k;
    cin >> a >> b >> k;
    int p = 1;
    for (int i = 0; i < b; i++) // pow(a, b)
        p = ((p % k) * (a % k)) % k;
    cout << p % k;
    return 0;
}