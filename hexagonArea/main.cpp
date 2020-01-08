//
// Created by Regan Palmer on 1/8/20.
//

#include <iostream>
#include <math.h>

using namespace std;
int main() {
    double sideLength;
    double area;
    cout << "Enter side length of a hexagon to get its area: ";
    cin >> sideLength;
    area = ((3 * sqrt(3)) / 2) * (sideLength * sideLength);
    cout << "A hexagon with side length " << sideLength << " has an area of " << area;
    return 0;
}