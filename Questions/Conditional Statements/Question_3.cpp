// For any 3 digit number check whether it’s an Armstrong number or not.

#include <iostream>
using namespace std;

int main () {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int temp = n;
    int d1, d2, d3, sum;
    d1 = temp % 10;
    temp /= 10;
    d2 = temp % 10;
    temp /= 10;
    d3 = temp % 10;
    sum = (d1 * d1 * d1) + (d2 * d2 * d2) + (d3 * d3 * d3);
    if (sum == n) {
        cout << "It is an armstrong number";
    }
    else {
        cout << "It is not an armstrong number";
    }
    return 0;
}