#include <iostream>
using namespace std;

int main () {

    // binary

    int a = 10;
    int b = 6;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b << endl;
    cout << "a % b = " << a % b << endl;

    // unary

    int x = 5;
    int y = ++x;  // preincrement
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    
    int p = 5;
    int q = p++;  // postincrement
    cout << "p = " << p << endl;
    cout << "q = " << q << endl;

    return 0;
}