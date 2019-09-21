#include <iostream>

using namespace std;
int p[100001];

int **func(int **a) {
    int **array;
    array = new int *[2];
    array[0] = new int[2];
    array[1] = new int[2];
    cout << "ok";
    array[0][0] = 0;
    cout << "ok1";
    array[0][1] = 1;
    cout << "ok2";
    array[1][0] = 2;
    array[1][1] = 3;
    return array;
}
int main() {
    // int n;
    // cin >> n;
    // // n = 25
    // // i = 2
    // // k = 4
    // for (int i = 2; i * i <= n; i++) 
    //     if (p[i] == 0) {
    //         int k = i;
    //         while (k + i <= n) {
    //             k += i;
    //             p[k] = 1;
    //         }
    //     }    
    
    // for (int i = 2; i <= n; i++)
    //     if (p[i] == 0) {
    //         cout << i << " ";
    //     }
    
    int **a;
    int **b = func(a);
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            cout << b[i][j];
    return 0;
}