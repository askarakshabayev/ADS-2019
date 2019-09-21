#include <iostream>

using namespace std;

int main(){
    int n;
    int sum = 0;
    for(;;){
        cin >> n;
        sum += n;
        if(n == 0)
            break;
    }
    cout << sum << endl;
    // int cnt = 0;
    // for(;;){
    //     cout << cnt++ << "\n";
    // }

    return 0;
}