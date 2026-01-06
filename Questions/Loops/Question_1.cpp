// WAP to find the Factorial of a number entered by the user.

#include <iostream>
using namespace std;

int main () {
    int n, factorial = 1;
    cout << "Enter a number: ";
    cin >> n;
    if (n <= 1) {
        cout << "Factorial of " << n << " = " << factorial;
    }
    else {
        for (int i = 2; i <= n; i++) {
            factorial *= i;
        }
        cout << "Factorial of " << n << " = " << factorial;
    }
    return 0;
}