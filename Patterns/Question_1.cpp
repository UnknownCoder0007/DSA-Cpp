// Print the 0-1 Triangle Pattern. 

#include <iostream>
using namespace std;

int main () {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;
    bool a = true;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            a = false;
        }
        else {
            a = true;
        }
        for (int j = 1; j <= i; j++) {
            cout << a << " ";
            a = !a;
        }
        cout << endl;
    }
    return 0;
}