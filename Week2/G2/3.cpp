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

class Stack {
    public:
    Node *top;
    int sz;

    Stack() {
        top = NULL;
        sz = 0;
    }

    void push(int data) {
        Node *node = new Node(data);
        if (top != NULL)
            node->next = top;
        top = node;
        sz++;
    }

    void pop() {
        if (top != NULL) {
            top = top->next;
            sz--;
        }
    }

    int getTop() {
        return top->data;
    }

    bool empty() {
        return (sz == 0);
    }
};

int main() {
    Stack *stack = new Stack();
    return 0;
}