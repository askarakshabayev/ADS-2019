#include <iostream>
#include <vector>

using namespace std;

class MinHeap {
    public:
    int sz;
    vector<int> a;

    MinHeap() {
        sz = 0;
    }

    int parent(int i) {
        return (i - 1) / 2;
    }

    int left(int i) {
        return 2 * i + 1;
    }

    int right(int i) {
        return 2 * i + 2;
    }

    void insert(int k) {
        sz++;
        a.push_back(k);
        int i = sz - 1;
        while (i > 0 && a[parent(i)] > a[i]) {
            swap(a[parent(i)], a[i]);
            i = parent(i);
        }
    }

    int getMin() {
        return a[0];
    }

    void heapify(int i) {
        if (left(i) > sz - 1)
            return;
        int j = left(i);
        if (right(i) < sz && a[j] > a[right(i)]) {
            j = right(i);
        }
        if (a[i] > a[j]) {
            swap(a[i], a[j]);
            heapify(j);
        }
    }

    int extractMin() {
        int mini = a[0];
        swap(a[0], a[sz - 1]);
        sz--;
        heapify(0);
        return mini;
    }

    void decKey(int i, int new_value) {
        a[i] = new_value;
        while (i > 0 && a[parent(i)] > a[i]) {
            swap(a[i], a[parent(i)]);
            i = parent(i);
        }
    }

    void incKey(int i, int new_value) {
        a[i] = new_value;
        heapify(i);
    }

    void print() {
        for (int i = 0; i < sz; i++)
            cout << a[i] << " ";
        cout << endl;
    }
};

void merge() {
    int a = 1; // 2^0
    int b = 1; // 3^0
    int p = 0;
    while (p <)
} 

int main() {
    MinHeap *minHeap = new MinHeap();
    int n, k;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> k;
        minHeap->insert(k);
    }
    // minHeap->print();
    minHeap->print();
    for (int i = 0; i < n; i++) {
        minHeap->extractMin();
        minHeap->print();
    }
    return 0;
}

