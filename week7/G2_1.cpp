#include <iostream>
#include <vector>

using namespace std;

vector<int> prefix_func(string s) {
    int n = s.size();
    vector<int> p(n);
    p[0] = 0;
    for (int i = 1; i < n; i++) {
        for (int l = 1; l <= i; l++) {
            if (s.substr(0, l) == s.substr(i - l + 1, l))
                p[i] = l;
        }
    }
    return p;
}

int main() {
    string s;
    cin >> s;
    vector<int> p = prefix_func(s);
    for (int i = 0; i < s.size(); i++)
        cout << p[i] << " ";
    return 0;
}