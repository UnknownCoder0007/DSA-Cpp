// Print the Palindromic Pattern with Numbers.

#include <iostream>
using namespace std;

int main () {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;
    int count = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = n-1; j >= i; j--) {
            cout << "  ";
        }
        for (int k = i; k >= 1; k--) {
            cout << k << " ";
        }
        for (int l = 2; l <= i; l++) {
            cout << l << " ";
        }
        cout << endl;
    }
    return 0;
}