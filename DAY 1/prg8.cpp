//write a c++ program that three integer as input from the user calculate their total sum and pint them .//
#include <iostream>
using namespace std;

int main() {
    int a, b, c, sum;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    sum = a + b + c;

    cout << "Total sum = " << sum << endl;

    return 0;
}