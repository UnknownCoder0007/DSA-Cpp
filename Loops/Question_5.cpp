// For a positive N , WAP that prints the first N Fibonacci numbers.

#include <iostream>
using namespace std;

int main () {
    int n;
    cout << "Enter a number : ";
    cin >> n;
    int prev = 0, curr = 1, sum = 1;
    cout << 0 << " ";
    for (int i = 1; i <= n; i++) {
        cout << sum << " ";
        sum = prev + curr;
        prev = curr;
        curr = sum;
    }
    return 0;
}