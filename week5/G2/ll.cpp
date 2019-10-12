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
    int size;

    LinkedList() {
        head = NULL;
        tail = NULL;
        size = 0;
    }

    void push_back(int data) {
        Node *node = new Node(data);
        if (tail == NULL) {
            tail = node;
            head = node;
        }
        else {
            tail->next = node;
            node->prev = tail;
            tail = node;
        }
        size++;
    }

    void push_front(int data) {
        Node *node = new Node(data);
        if (head == NULL) {
            tail = node;
            head = node;
        }
        else {
            head->prev = node;
            node->next = head;
            head = node;
        }
        size++;
    }

    void pop_back() {
        if (tail != NULL) {
            tail = tail->prev;
            if (tail != NULL)
                tail->next = NULL;
        }
        size--;
    }

    void pop_front() {
        if (head != NULL) {
            head = head->next;
            head->prev = NULL;
        }
        size--;
    }
    int get_back() {
        return tail->data;
    }

    int get_front() {
        return head->data;
    }

    void reverse() {
        cout << "OK1";
        tail = head;
        cout << "OK2";
        tail = head;
        Node *node = head;
        Node *prev = NULL, *next = NULL;
        while (node != NULL) {
            next = node->next;
            node->next = prev;
            prev = node;
            node = next;
        }
        head = prev;
        cout << "OK3" << endl;
        cout << tail->data << endl;
        cout << "OK4" << endl;
        //tail = prev_head;
    }

    /*void find_tail() {
        Node *current = head;
        int count = 0;
        while (current != NULL) {
            if (count == size - 1) {
                tail = current;
                break;
            }
            count++;
            current = current->next;
        }
    }*/
};

int main() {
    LinkedList *ll = new LinkedList();
    int n, x;
    string s;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> s;
        if (s == "back") {
            if (ll->size > 0) {
                cout << "OK5" << endl;
                cout << ll->get_back() << endl;
                cout << "OK6" << endl;
                ll->pop_back();
                cout << "OK7" << endl;
            }
            else 
                cout << ";(" << endl;
        }
        else if (s == "front") {
            if (ll->size > 0) {
                cout << ll->get_front() << endl;
                ll->pop_front();
            }
            else 
                cout << ";(" << endl;
        }
        else if (s == "push_back") {
            cin >> x;
            ll->push_back(x);
        }
        else if (s == "push_front") {
            cin >> x;
            ll->push_front(x);
        }
        else if (s == "reverse") {
            ll->reverse();
        }
    }
}