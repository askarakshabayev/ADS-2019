#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int n3 = n % 10;
    int n2 = (n / 10) % 10;
    int n1 = n / 100;
    cout << n1 + n2 + n3; 

    return 0;
}