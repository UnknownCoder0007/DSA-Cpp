/*
Write a C++ program that takes a year from the user and print whether 
that year is a leap year or not. 
*/

#include <iostream>
using namespace std;

int main () {
    int year;
    cout << "Enter a year: ";
    cin >> year;
    if (year % 400 == 0) {
        cout << "It is a leap year";
    }
    else if (year % 100 == 0) {
        cout << "It is not a leap year";
    }
    else if (year % 4 == 0) {
        cout << "It is a leap year";
    }
    else {
        cout << "It is not a leap year";
    }
    return 0;
}