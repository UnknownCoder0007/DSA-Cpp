// Write a function that prints the largest of 3 numbers.

#include <iostream>
using namespace std;

int largest (int a, int b, int c) {
    if (a > b) {
        if (a > c) {
            return a;
        }
        else {
            return c;
        }
    }
    else {
        if (b > c) {
            return b;
        }
        else {
            return c;
        }
    }
}

int main () {
    int a, b, c;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;
    cout << "Largest number is " << largest (a, b, c) << endl;
    return 0;
}