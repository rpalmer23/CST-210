// Regan Palmer
// This is my own work
// 1-8-20

#include <iostream>
using namespace std;
int main() {
    int first;
    int second;
    cout << "Enter two integers to see which is larger: ";
    cin >> first >> second;
    if (first > second) {
        cout << first << " is the larger integer.";
    } else {
        cout << second << " is the larger integer.";
    }
    return 0;
}

