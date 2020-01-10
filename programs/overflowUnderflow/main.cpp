#include <iostream>
using namespace std;
int main() {
    short value = 32767;
    short negValue = -32768;

    cout << "Values are: " << "\n" << value << "\n" << negValue;
    cout << "\nNow 1 will be added and subtracted respectively\n";
    value++;
    negValue--;
    cout << value << "\n" << negValue;
    return 0;
}
