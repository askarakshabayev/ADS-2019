#include <iostream>
#include <vector>

using namespace std;


int calc_hash(string s) {
    int h = 0;
    int p = 31;
    int p_pow = 1;
    for (int i = 0; i < s.size(); i++) {
        h += (s[i] - 'a') * p_pow;
        p_pow *= 31;
    }
    return h;
}

vector<int> find_hash(string s) {
    int n = s.size();
    vector<int> h(n);
    int p = 31;
    int p_pow = 1;
    h[0] = s[0] - 'a';
    for (int i = 1; i < n; i++) {
        p_pow *= 31;
        h[i] = h[i - 1] + (s[i] - 'a') * p_pow;
    }
    return h;
} 

int main() {
    string s, t;
    cin >> s >> t;
    int hash_t = calc_hash(t);
    vector<int> hash = find_hash(s);
    int n = s.size();
    int m = t.size();
    int p[n];
    p[0] = 1;
    for (int i = 1; i < n; i++)
        p[i] = p[i - 1] * 31;

    for (int i = 0; i < n - m + 1; i++) {
        int j = i + m - 1;
        int hashij = hash[j];
        if (i > 0)
             hashij -= hash[i - 1];
        if (hashij == hash_t * p[i]) {
            cout << i << " ";
        }
    }
    return 0;
}