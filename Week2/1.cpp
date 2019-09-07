#include <iostream>

using namespace std;

class Node {
    public:
    int data;
    Node *next;

    Node(int data) {
        this->data = data;
    }

    Node() {

    }
};
int main() {
    Node *node1 = new Node(5);
    Node *node2 = new Node(10);
    Node *node3 = new Node(15);
    Node *node4 = new Node(6);
    
    Node node5;
    node5.data = 21;

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = &node5;

    cout << node1->next->next->data;

    return 0;
}