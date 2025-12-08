#include <iostream>
using namespace std;

int main () {
    int eng, maths, sci;
    float avg;
    cout << "Enter english marks: ";
    cin >> eng;
    cout << "Enter maths marks: ";
    cin >> maths;
    cout << "Enter science marks: ";
    cin >> sci;
    avg = (eng + maths + sci) / 3.0;
    cout << "Average = " << avg << endl;
    return 0;
}