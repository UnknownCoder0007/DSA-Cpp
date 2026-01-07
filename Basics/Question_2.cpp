/*
Enter cost of 3 items from the user (using float data type) - a pencil, a 
pen and an eraser. You have to output the total cost of the items back to the user as 
their bill.
*/

#include <iostream>
using namespace std;

int main () {
    float pencil, pen, eraser, total, bill;
    cout << "Enter cost of pencil: ";
    cin >> pencil;
    cout << "Enter cost of pen: ";
    cin >> pen;
    cout << "Enter cost of eraser: ";
    cin >> eraser;
    total = pen + pencil + eraser;
    cout << "Total = Rs. " << total << endl;
    bill = total + (total * 0.18);
    cout << "Bill = Rs. " << bill;
    return 0;
}