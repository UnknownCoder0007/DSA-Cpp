#include <iostream>
using namespace std;

int main () {
    int l, b;
    cout << "Enter length: ";
    cin >> l;
    cout << "Enter breadth: ";
    cin >> b;
    for (int i = 1; i <= b; i++) {
        if (i == 1 || i == b) {
            for (int j = 1; j <= l; j++) {
                cout << "* ";
            }
        }
        else {
            for (int k = 1; k <= l; k++) {
                if (k == 1 || k == l) {
                    cout << "* ";
                }
                else {
                    cout << "  ";
                }
            }
        }
        cout << endl;
    }
    return 0;
}