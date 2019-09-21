#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;  
    // cout << n * (n + 1) / 2;
    int sum = 0;
    for(int i = 0; i <= n; i++){
        sum += i;
        // sum = sum + i;
    }
    cout << sum << "\n";
    return 0;
}