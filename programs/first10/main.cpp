#include <iostream>
using namespace std;
int main() {
    int counter = 1, amt7 = 0;

    cout << "First 10 factorials of 7 are: ";

    while(amt7 < 10) {
        if (counter % 7 == 0) {
            cout << counter << ", ";
            amt7++;
        }
        counter++;
    }

    return 0;
}
