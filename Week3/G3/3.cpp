#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    // odd numbers
    for(int i = 1; i <= n; i = i + 2){
        cout << i << " ";
    }

    // even numbers
    // for(int i = 0; i <= n; i = i + 2){
    //     cout << i << " ";
    // }

    // for(int i = 0; i <= n; i++){
    //     if(i % 2 != 0)
    //         cout << i << " ";
    // }
    return 0;
}