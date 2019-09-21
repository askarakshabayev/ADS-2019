#include <iostream>

using namespace std;

class Node {
    public:
    int data;
    Node *left, *right;

    Node(int data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

class BST {
    public:
    Node *root;
    BST() {
        root = NULL;
    }

    Node *insert(Node *node, int data) {
        if (node == NULL) {
            node = new Node(data);
            return node;
        }
        if (data <= node->data)
            node->left = insert(node->left, data);
        else 
            node->right = insert(node->right, data);
        return node;
    }

    void inOrder(Node *node) {
        if (node == NULL)
            return;
        inOrder(node->left);
        cout << node->data << " ";
        inOrder(node->right);
    }

    Node *findMin(Node *node) {
        while (node->left != NULL)
            node = node->left;
        return node;
    }

    Node *findMax(Node *node) {
        while (node->right != NULL)
            node = node->right;
        return node;
    }

    Node *delete_node(Node *node, int data) {
        if (node == NULL)
            return NULL;
        if (data < node->data) 
            node->left = delete_node(node->left, data);
        else if (data > node->data)
            node->right = delete_node(node->right, data);
        else {
            if (node->right == NULL && node->left == NULL)
                node = NULL;
            else if (node->left == NULL)
                node = node->right;
            else if (node->right == NULL)
                node = node->left;
            else {
                Node *tmp = findMin(node->right);
                node->data = tmp->data;
                node->right = delete_node(node->right, tmp->data);
            }
        }
        return node;
    }
};

int main() {
    BST *bst = new BST();
    bst->root = bst->insert(bst->root, 50);
    bst->root = bst->insert(bst->root, 35);
    bst->root = bst->insert(bst->root, 30);
    bst->root = bst->insert(bst->root, 40);
    bst->root = bst->insert(bst->root, 32);
    bst->root = bst->insert(bst->root, 36);
    bst->root = bst->insert(bst->root, 80);
    bst->root = bst->insert(bst->root, 60);
    bst->root = bst->insert(bst->root, 90);
    bst->root = bst->insert(bst->root, 70);

    bst->inOrder(bst->root);
    cout << endl;
    bst->root = bst->delete_node(bst->root, 35);
    bst->inOrder(bst->root);
    // Node *node = bst->findMin(bst->root->right);
    // cout << node->data;

    // Node *node_max = bst->findMax(bst->root);
    // cout << node_max->data;

    return 0;
}