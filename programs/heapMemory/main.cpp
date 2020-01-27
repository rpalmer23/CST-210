#include <iostream>
using namespace std;
int main() {
    int *heap = new int[10];

    for (int i = 0; i < 10; ++i) {
        heap[i]=i;
    }

    for (int j = 0; j < 10; ++j) {
        cout << heap[j] << endl;
    }

    delete[] heap;
    return 0;
}
