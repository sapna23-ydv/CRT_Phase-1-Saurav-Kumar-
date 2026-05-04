// wap that takes positive no. interger m as a ssinput form a user then calaculate its factorical using for loop//
#include <iostream>
using namespace std;

int main() {
    int m;
    long long fact = 1;

    cout << "Enter a positive integer: ";
    cin >> m;

    if(m < 0) {
        cout << "Factorial not defined for negative numbers";
    } else {
        for(int i = 1; i <= m; i++) {
            fact = fact * i;
        }
        cout << "Factorial of " << m << " is " << fact;
    }

    return 0;
}