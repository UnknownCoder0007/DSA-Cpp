#include <iostream>
using namespace std;

int main () {
    cout << (10/3.0) << endl;          // implicit
    cout << ((float)10 / 3) << endl;    // explicit
    cout << ('a' + 2) << endl;
    cout << (char) ('a' + 1) << endl;
    return 0;
}
