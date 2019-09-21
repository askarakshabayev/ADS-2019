#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n; // 123
    /**
     * 1. n = 1234; n % 10 = 4; n = n / 10; 
     * 2. n = 123; n % 10 = 3; n = n / 10; 
     * 3. n = 12; n % 10 = 2; n = n / 10; 
     * 4. n = 1; n % 10 = 1; n = n / 10; 
     * 5. n = 0;
     **/
    int sum = 0;
    for(;n > 0; n /= 10){
        sum += n % 10;
    }
    cout << sum << endl;
    

    return 0;
}