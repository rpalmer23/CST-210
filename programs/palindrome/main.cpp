#include <iostream>
using namespace std;

int main() {
    string input;
    cout << "Enter a word to see if it's a palindrome: ";
    cin >> input;
    int len = input.length();
    char charArray[len];
    char dummyArray[len];
    strcpy(charArray, input.c_str());

    int dummyCount = 0;
    for(int i = len-1; i >= 0; i--) {
        dummyArray[dummyCount] = charArray[i];
        dummyCount++;
    }
cout << dummyArray;
    if(strcmp(charArray,dummyArray) == 0) {
        cout << "\nThat word is a palindrome!";
    } else {
        cout << "\nNot a palindrome.";
    }

    return 0;
}
