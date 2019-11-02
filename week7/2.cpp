#include <iostream>
#include <vector>

using namespace std;

vector<int> prefix_func(string s) {
    int n = s.size();
    vector<int> p(n);
    p[0] = 0;
    for (int i = 1; i < n; i++) {
        int j = p[i - 1];
        while (j > 0 && s[j] != s[i]) 
            j = p[j - 1];
        if (s[j] == s[i]) j++;
        p[i] = j;
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