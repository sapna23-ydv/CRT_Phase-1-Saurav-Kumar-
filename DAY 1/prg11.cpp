//White C++ go program that a pusons age as imper &print it a age is 18 or oldes is eligible to vote then print it//
#include <iostream>
using namespace std;

int main() {
    int age;

    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18) {
        cout << "Eligible to vote" << endl;
    } else {
        cout << "Not eligible to vote" << endl;
    }

    return 0;
}