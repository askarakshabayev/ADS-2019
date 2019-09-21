#include <iostream>

using namespace std;

class Node {
    public:
    int data;
    Node *left;
    Node *right;

    Node(int data) {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

class Tree {
    public:
    Node *root;
    Tree() {
        root = NULL;
    }
    Node *insert_node(Node *node, int data) {
        if (node == NULL) {
            Node *node = new Node(data);
            return node;
        }
        //cout << data << " " << node->data << endl;
        if (data <= node->data) {
            node->left = insert_node(node->left, data);
        } else {
            node->right = insert_node(node->right, data);
        }
        return node;

    }

};

int main() {
    Tree *t = new Tree();
    Node *node = t->insert_node(NULL, 10);
    t->root = node;

    t->root = t->insert_node(t->root, 7);
    t->root = t->insert_node(t->root, 20);
    t->root = t->insert_node(t->root, 6);
    t->root = t->insert_node(t->root, 8);
    t->root = t->insert_node(t->root, 4);
    t->root = t->insert_node(t->root, 9);
    t->root = t->insert_node(t->root, 12);
    t->root = t->insert_node(t->root, 22);

    cout << t->root->right->right->data;
    return 0;
}