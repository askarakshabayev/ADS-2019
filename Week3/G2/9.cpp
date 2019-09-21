// y ^ 3 = x
// l = 1, r = x, y = (l + r) / 2

#include <iostream>

using namespace std;

double func(double x) {
    double l = 1;
    double r = x;
    double eps = 0.00000000001;
    while (r - l > eps) {
        cout << l << " " << r << endl;
        double m = (l + r) / 2.0;
        if (m * m * m > x)
            r = m;
        else 
            l = m;
    }
    return l;
}

int main() {
    double x;
    cin >> x;
    printf("%.10f", func(x));
    return 0;
}