// Write a program to calculate the area of a circle.

#include <iostream>
using namespace std;

int main () {
    float r, area;
    cout << "Enter radius: ";
    cin >> r;
    area = 3.1415 * r * r;
    cout << "Area of circle = " << area << " sq. units" << endl;
    return 0;
}