//Regan Palmer
//This is my own work
//1-26-20

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {

//NUMBER 1
    cout << "-----NUMBER 1-----" << endl;
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

    cout << "Max integer is: " << max << ".\nMin integer is: " << min << "." << endl;

//NUMBER 2
    cout << "-----NUMBER 2-----" << endl;
    int counter = 0, total = 0, amt7 = 0;

    while(amt7 < 50) {
        if (counter % 7 == 0) {
            total += counter;
            amt7++;
        }
        counter++;
    }

    cout << "Total is: " << total;


//NUMBER 3
    cout <<"\n-----NUMBER 3-----" << endl;
    int counterB = 1, amt7B = 0;

    cout << "First 10 factorials of 7 are: ";

    while(amt7B < 10) {
        if (counterB % 7 == 0) {
            cout << counterB << ", ";
            amt7B++;
        }
        counterB++;
    }


//NUMBER 4
    cout << "\n-----NUMBER 4-----" << endl;
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


//NUMBER 5
    cout << "\n-----NUMBER 5-----" << endl;
    int inputInt;
    int factors = 0;
    cout << "Enter a positive integer to see if it's a prime number: ";
    cin >> inputInt;

    for (int i = 1; i <= inputInt; i++){
        if (inputInt % i == 0) {
            factors++;
        }
    }

    if (factors > 2) {
        cout << inputInt << " is not a prime number";
    } else {
        cout << inputInt << " is a prime number";
    }


//NUMBER 6
    cout << "\n-----NUMBER 6-----" << endl;
    int valuesB[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int totalB = 0;
    for (int i = 0; i < sizeof(valuesB)/ sizeof(valuesB[0]); i++) {
        totalB += valuesB[i];
    }
    double avg = totalB/ (sizeof(valuesB)/ sizeof(valuesB[0]));
    cout << "Average of the array is " << avg;


//NUMBER 7
    cout << "\n-----NUMBER 7-----" << endl;
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
