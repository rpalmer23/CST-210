#include <iostream>

void passByValue(int value);

void passByReference(int &value);

using namespace std;
int main() {
    int value = 10;

    passByValue(value);

    cout << value << endl;

    passByReference(value);

    cout << value;
    return 0;
}

void passByReference(int &value) {
    value += 1;
}

void passByValue(int value) {
    value += 1;
}

