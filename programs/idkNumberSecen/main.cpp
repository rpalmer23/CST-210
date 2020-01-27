#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main() {
    ifstream fin("../input.in");
//validate file
    if(!fin){
        cerr << "Bruh";
        exit(2);
    }

    int numStrings;
    cout << "Enter number of strings to read: ";
    cin >> numStrings;

    //whee pointers for arrays yay
    string *strArr = new string[numStrings];

    string str;
    for(int i = 0; i < numStrings;i++){
        fin>>strArr[i];
    }

    int maxSize = 0;
    string maxLength;
    for (int j = 0; j < numStrings; j++) {
        if(strArr[j].size() > maxSize) {
            maxSize = strArr[j].size();
            maxLength = strArr[j];
        }
    }
    cout << "The longest string of the " << numStrings << " string(s) is: " << maxLength << ".";
    return 0;
}
