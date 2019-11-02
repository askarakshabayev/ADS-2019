#include <iostream>

using namespace std;

class Node {
    public:
    int data;
    Node *ch[2];
    int cnt;
    Node(int data) {
        this->data = data;
        this->ch[0] = NULL;
        this->ch[1] = NULL;
        cnt = 0;
    }
};

int a[100][100];
int n;
class Trie {
    public:
    Node *root;
    Trie() {
        root = new Node(0);
    }

    void insert(int row) {
        Node *cur = root;
        for (int i = 0; i < n; i++) {
            int k = a[row][i];
            if (cur->ch[k] != NULL) 
                cur = cur->ch[k];
            else {
                Node *node = new Node(k);
                cur->ch[k] = node;
                cur = node;
            }
            cur->cnt++;
        }
    }
    int b[100];
    void search(Node *node, int d) {
        if (node == NULL)
            return;
        if (d >= 0)
            b[d] = node->data;
        if (d == n - 1) {
            for (int i = 0; i < n; i++)
                cout << b[i];
            cout << " - " << node->cnt << endl;
        } else {
            search(node->ch[0], d + 1);
            search(node->ch[1], d + 1);
        }
    }
};

int main() {
    Trie *trie = new Trie();
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
        trie->insert(i);
    }
    trie->search(trie->root, -1);
    return 0;
}