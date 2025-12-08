#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int a = 10;
    char b = 'A';
    bool flag = true;
    float c = 3.14159265359;      // upto 7 digits
    double d = 3.14159265359;   // upto 15 digits

    cout << a << endl;
    cout << b << endl;
    cout << flag << endl;
    cout << setprecision(15) << c << endl;
    cout << setprecision(15) << d << endl;

    cout << "int size = " << sizeof(int) << endl;
    cout << "char size = " << sizeof(char) << endl;
    cout << "bool size = " << sizeof(bool) << endl;
    cout << "float size = " << sizeof(float) << endl;
    cout << "double size = " << sizeof(double) << endl;

    return 0;
}