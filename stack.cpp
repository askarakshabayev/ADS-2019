#include <iostream>

using namespace std;

template<typename T>
class Node {
    public:
    T data;
    Node *next;

    Node (T data) {
        this->data = data;
        this->next = NULL;
    }
};

template<typename T>
class Stack {
    public:
    Node<T> *top;
    int sz;

    Stack() {
        top = NULL;
        sz = 0;
    }

    int size() {
        return sz;
    }

    void push(T data) {
        Node<T> *node = new Node<T>(data);
        node->next = top;
        top = node;
        sz++;
    }

    int back() {
        return top->data;
    }

    void pop() {
        if (top != NULL) {
            top = top->next;
            sz--;
        }
    }    
};

int main() {
    Stack<int> *st = new Stack<int>();
    st->push(5);
    st->push(3);
    st->push(4);
    cout << st->back() << endl;
    st->pop();
    cout << st->back() << endl;
    return 0;
}