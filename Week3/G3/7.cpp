#include <iostream>

using namespace std;

int main(){
    // n!
    int n;
    cin >> n;  
    int a = 1;
    for(int i = 1; i <= n; i++){
        a *= i;
        // a = a * i;
    }
    return 0;
}