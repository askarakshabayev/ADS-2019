#include <iostream>

using namespace std;

template<typename T>
class Node {
    public:
    T data;
    Node<T> *next;

    Node(T data) {
        this->data = data;    
    }
};

template<typename T>
class Queue {
    public:

    Node<T> *head, *tail;
    int sz;

    Queue() {
        head = NULL;
        tail = NULL;
        sz = 0;
    }

    void push(int data) {
        Node<T> *node = new Node<T>(data);
        if (tail == NULL) {
            head = node;
            tail = node;        
        } else {
            tail->next = node;
            tail = node;
        }
        sz++;
    }

    void pop() {
        if (head != NULL) {
            head = head->next;
            sz--;
        }
        
    }

    int front() {
        if (head == NULL)
            return 0;
        return head->data;
    }

    bool empty() {
        return (sz == 0);
    }
};

class Person {
    public:
    string firstName, lastName;
    Person(string f, string l) {
        firstName = f;
        lastName = l;
    }
};

int main() {
    
    return 0;
}