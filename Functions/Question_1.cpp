// Write a function to check if a number is a palindrome

#include <iostream>
using namespace std;

int palindrome (int n) {
    int temp = 0;
    while (n > 0) {
        temp = (temp * 10) + (n % 10);
        n /= 10;
    }
    return temp;
}

int main () {
    int n;
    cout << "Enter a number : ";
    cin >> n;
    int check = palindrome (n);
    if (check == n) {
        cout << "Yes, it is palindrome";
    }
    else {
        cout << "No, it is not palindrome";
    }
    return 0;
}