#include <iostream>
using namespace std;
int main() {
    int max, min;
    int values[5];
    cout << "Enter 5 integers: ";
    cin >> values[0] >> values[1] >> values[2] >> values[3] >> values[4];

    if(values[0] > values [1]) {
        max = values[0];
    } else {
        max = values[1];
    }
    if(values[2] > max) {
        max = values[2];
    }
    if(values[3] > max) {
        max = values[3];
    }
    if(values[4] > max) {
        max = values[4];
    }

    if(values[0] < values [1]) {
        min = values[0];
    } else {
        min = values[1];
    }
    if(values[2] < min) {
        min = values[2];
    }
    if(values[3] < min) {
        min = values[3];
    }
    if(values[4] < min) {
        min = values[4];
    }

    cout << "Max integer is: " << max << ".\nMin integer is: " << min << ".";
    return 0;
}
