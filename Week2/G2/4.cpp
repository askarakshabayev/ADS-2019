#include <iostream>

using namespace std;

class Node {
    public:
    int data;
    Node *next;
    Node *prev;

    Node(int data) {
        this->data = data;
        next = NULL;
        prev = NULL;
    }
};

class LinkedList {
    public:
    Node *head, *tail;

    LinkedList() {
        head = NULL;
        tail = NULL;
    }

    void pop_back() {
        if (tail != NULL) {
            tail = tail->prev;
            tail->next = NULL;
        }
    }

    void pop_front() {
        if (head != NULL) {
            head = head->next;
            head->prev = NULL;
        }
    }

    void push_back(int data) {
        Node *node = new Node(data);
        if (tail == NULL) {
            tail = node;
            head = node;
        } else {
            tail->next = node;
            node->prev = tail;
            tail = node;
        }
    } 

    void push_front(int data) {
        Node *node = new Node(data);
        if (head == NULL) {
            tail = node;
            head = node;
        } else {
            head->prev = node;
            node->next = head;
            head = node;
        }
    }

    void delete_element(Node *node) {
        if (node == head)
            pop_front();
        else if(node == tail)
            pop_back();
        else {
            node->prev->next = node->next;
            node->next->prev = node->prev;
        }
    }

    void insert(Node *node1, Node *node2) {
        if (node1 == tail)
            push_back(node2->data);
        else {    
            node1->next->prev = node2;
            node2->next = node1->next;
            node1->next = node2;
            node2->prev = node1;
        }
    }

    Node* search(int data) {
        Node *node = head;
        while (node != NULL && node->data != data)
            node = node->next;
        return node;
    }

    void print() {
        Node *node = head;
        while (node != NULL) {
            cout << node->data << "-->";
            node = node->next;
        }
        cout << endl;
    }
};

int main() {
    LinkedList *ll = new LinkedList();
    ll->push_back(5);
    ll->push_back(17);
    ll->push_front(20);
    ll->push_front(31);
    ll->push_back(45);
    // 31-->20-->5-->17-->45
    ll->print();
    ll->pop_front();
    ll->pop_back();
    ll->print();
    Node *node = ll->search(5);
    ll->delete_element(node);
    ll->print();

    // LinkedList *q = new LinkedList();
    // q->push_back(5);
    // q->head;
    // q->pop_front();

    // LinkedList *st = new LinkedList();
    // st->push_front(6);
    // st->head
    // st->pop_front();

    return 0;
}