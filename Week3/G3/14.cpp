#include <iostream>

using namespace std;

int main(){
    int n, maxi, i = 0;
    while(true){
        cin >> n;
        if(i == 0)
            maxi = n;
        if(n == 0)
            break;
        if(n > maxi)
            maxi = n;
        i++;
    }
    cout << maxi << endl;

    return 0;
}