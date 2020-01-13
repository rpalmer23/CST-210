#include <iostream>
using namespace std;
int main() {
    int counter = 0, total = 0, amt7 = 0;

    while(amt7 < 50) {
        if (counter % 7 == 0) {
            total += counter;
            amt7++;
        }
        counter++;
    }

    cout << "Total is: " << total;
    return 0;
}
