#include <iostream>

using namespace std;

int m_pow(int a, int b) {
    if (b == 0)
        return 1;
    if (b == 1)
        return a;
    int res = m_pow(a, b / 2);
    if (b % 2 == 0)
        return res * res;
    return res * res * a;
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << m_pow(a, b);
    return 0;
}