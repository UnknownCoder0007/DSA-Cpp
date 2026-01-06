#include <iostream>
using namespace std;

int main () {
    int a = 10;
    int b = 5;
    int c = 7;
    cout << (a == b && a == c) << endl;
    cout << (a == b || a == c) << endl;
    cout << !(a == b) << endl;
    return 0;
}