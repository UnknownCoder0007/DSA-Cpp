#include <iostream>
using namespace std;

#define ll long long;  // macro

int main () {
    ll a = 10;         // does not occupy memory
    const int b = 25;  // occupy memory like a normal variable
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
}