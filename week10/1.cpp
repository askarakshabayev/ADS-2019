#include <iostream>
#include <set>

using namespace std;

int main() {
    string s, w;
    cin >> s;
    set<string> a;
    int n = s.size();
    for (int i = 0; i < n; i++) {
        w = "";
        for (int j = i; j < n; j++) {
            w += s[j];
            a.insert(w);
        }
    }
    cout << a.size();
    return 0;
}