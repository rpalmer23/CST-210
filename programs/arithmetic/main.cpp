#include <iostream>
using namespace std;
int main() {
    bool testOne = true;
    bool testTwo = false;
    char charTestOne = 'a';
    char charTestTwo = 'b';

    cout << "Arithmetic operations with booleans: ";
    cout << "\n" <<testOne + testTwo;
    cout << "\n" <<testOne - testTwo;
    cout << "\n" <<testOne * testTwo;
    //cout << testOne / testTwo;

    cout << " \nArithmetic operations with chars";
    cout << "\n" << charTestOne + charTestTwo;
    cout << "\n" <<charTestOne - charTestTwo;
    cout << "\n" <<charTestOne * charTestTwo;
    cout << "\n" <<charTestOne / charTestTwo;
    return 0;
}
