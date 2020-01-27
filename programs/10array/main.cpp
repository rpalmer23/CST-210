//Regan Palmer
//1-22-20
//This is my own work
#include <iostream>
#include <time.h>
using namespace std;
int main() {
    int integers[10];
    srand(time(0)); //sets random seed

    for (int i = 0; i < 10; ++i) { //generates random array
        integers[i] = rand() % 100 + 1;
    }

    int max = 0; //determines max number and its location
    int maxLocation = 0;
    for (int j = 0; j < 10; ++j) {
        if(integers[j]  > max) {
            max = integers[j];
            maxLocation = j;
        }
    }

    int min = 100; //determines max number and its location
    int minLocation = 0;
    for (int k = 0; k < 10; ++k) {
        if(integers[k] < min) {
            min = integers[k];
            minLocation = k;
        }
    }

    cout << "Original array: " << endl; //prints original array
    for (int l = 0; l < 10; ++l) {
        cout << integers[l] << endl;
    }

    integers[maxLocation] = 0; //sets min and max to 0
    integers[minLocation] = 0;
    cout << "Array without largest and smallest: " << endl; //prints array without any 0's
    for (int m = 0; m < 10; ++m) {
        if(integers[m] != 0) {
            cout << integers[m] << endl;
        }
    }

    return 0;
}
