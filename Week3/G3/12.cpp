#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int i = 1, cnt = 0;
    while(i <= n){
        if(n % i == 0)
            cnt++;
        i++;
    }
    if(cnt > 2)
        cout << "NO";
    else
        cout << "YES";

    return 0;
}