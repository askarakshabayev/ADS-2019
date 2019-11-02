#include <iostream>

using namespace std;

class Node {
    public:
    char value;
    Node *ch[26];

    Node(char value) {
        this->value = value;
        for (int i = 0; i < 26; i++)
            this->ch[i] = NULL;
    }
};

int cnt = 0;

class Trie {
    public:
    Node *root;
    Trie() {
        root = new Node(' ');
    }

    void insert(string s) {
        Node *cur = root;
        for (int i = 0; i < s.size(); i++) {
            if (cur->ch[s[i] - 'a'] != NULL)
                cur = cur->ch[s[i] - 'a'];
            else {
                Node *node = new Node(s[i]);
                cur->ch[s[i] - 'a'] = node; 
                cur = node;
                cnt++;
            }
        }
    }
};

int main() {
    Trie *trie = new Trie();
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        string s1 = s.substr(i);
        trie->insert(s1);
    }
    cout << cnt;
    return 0;
}