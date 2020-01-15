#include <iostream>
using namespace std;
int main() {
    int input;
    int factors = 0;
    cout << "Enter a positive integer to see if it's a prime number: ";
    cin >> input;

    for (int i = 1; i <= input; i++){
        if (input % i == 0) {
            factors++;
        }
    }

    if (factors > 2) {
        cout << input << " is not a prime number";
    } else {
        cout << input << " is a prime number";
    }
    return 0;
}
