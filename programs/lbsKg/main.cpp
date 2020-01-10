//
// Created by Regan Palmer on 1/8/20.
// This is my own work
//

#include <iostream>
using namespace std;
int main(){
    double pounds;
    double kilos;
    cout << "Enter a number in pounds to get its value in kilograms: ";
    cin >> pounds;
    kilos = pounds * 0.454;
    cout << pounds << " pounds is " << kilos << " kilograms.";
    return 0;
}
