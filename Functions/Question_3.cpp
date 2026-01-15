/*
Write a function which takes 2 numbers as parameters (a & b) and 
outputs : a^2 + b^2 + 2*ab.
*/

#include <iostream>
using namespace std;

int square (int a, int b) {
    int result = (a * a) + (b * b) + (2 * a * b);
    return result;
}

int main () {
    int a, b;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "a^2 + b^2 + 2ab = " << square (a, b) << endl;
    return 0;
}