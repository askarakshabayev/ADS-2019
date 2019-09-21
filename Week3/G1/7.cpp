// y^3 = x

#include <iostream>

using namespace std;

int main() {
    int x;
    cin >> x;
    double l = 1;
    double r = x;
    double eps = 0.000000001;
    while (r - l > eps) {
        double m = (l + r) / 2.0;
        if (m * m * m > x)
            r = m;
        else 
            l = m;
    }
    printf("%.10f", r);
    return 0;
}