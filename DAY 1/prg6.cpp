//White a programi that takes two integer a & b multiple a by & using bitwish left shift operator. print value.//
#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter value of a: ";
    cin >> a;

    cout << "Enter value of b: ";
    cin >> b;

    int result = a << b;   // left shift

    cout << "Result (a * 2^b) = " << result << endl;

    return 0;
}