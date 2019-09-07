#include <iostream>

using namespace std;

class Node {
    public:
    int data;
    Node *next;

    Node(int data) {
        this->data = data;    
    }
};



int main() {
    Node *node1 = new Node(5);
    Node *node2 = new Node(4);
    Node *node3 = new Node(10);
    Node *node4 = new Node(15);
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;

    cout << node1->next->next->next->data;

    return 0;
}