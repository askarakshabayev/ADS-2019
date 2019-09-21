#include <iostream>

using namespace std;

int main(){
    int a = 1, n;
    while(true){
        cin >> n;
        if(n % 2 == 1)
            a = a * n;
        if(n == 0)
            break;
    }
    cout << a << endl;


    return 0;
}