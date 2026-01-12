// WAP to input a number and check whether the number is an Armstrong number or not. 

#include <iostream>
using namespace std;

int main () {
    int n, temp;
    cout << "Enter a number : ";
    cin >> n;
    temp = n;
    int sum = 0;
    while (temp > 0) {
        int x = temp % 10;
        sum += (x * x * x);
        temp /= 10;
    }
    if (sum == n) {
        cout << n << " is an armstrong number";
    }
    else {
        cout << n << " is not an armstrong number";
    }
    return 0;
}