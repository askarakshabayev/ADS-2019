#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    for (int i = 2; i <= n; i++) {
        int k = 0;
        for (int j = 2; j * j <= i; j++)
            if (i % j == 0) {
                k = 1;
                break;
            }

        if (k == 2)
            cout << i << " ";
    }
    return 0;
}