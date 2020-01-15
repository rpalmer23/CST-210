#include <iostream>
using namespace std;
int main() {
    int values[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int total = 0;
    for (int i = 0; i < sizeof(values)/ sizeof(values[0]); i++) {
    total += values[i];
    }
    cout << total << endl;
    double avg = total/ (sizeof(values)/ sizeof(values[0]));
    cout << "Average of the array is " << avg;
    return 0;
}
