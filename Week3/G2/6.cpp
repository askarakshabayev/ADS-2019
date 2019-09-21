#include <iostream>

using namespace std;

int **mult(int **a, int **b) {
    int **c = new int *[2];
    c[0] = new int[2];
    c[1] = new int[2];
    c[0][0] = c[0][1] = c[1][0] = c[1][1] = 0;
    int n = 2;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // i = 0, j = 0, k = 1
            for (int k = 0; k < n; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    return c;
}

int **matrix_pow(int **a, int n) {
    if (n == 1)
        return a;
    int **res = matrix_pow(a, n / 2);
    if (n % 2 == 0)
        return mult(res, res);
    return mult(mult(res, res), a);
}

int main() {
    int **a;
    a = new int *[2];
    a[0] = new int[2];
    a[1] = new int[2];

    a[0][0] = 0;
    a[0][1] = 1;
    a[1][0] = 1;
    a[1][1] = 1;

    int n;
    cin >> n;
    int **b = matrix_pow(a, n);

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) 
            cout << b[i][j] << " ";
        cout << endl;
    }
    return 0;
}
// f(n) % k
// (a * b) % k = ((a % k) * (b % k)) % k