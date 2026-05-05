// WRITE A FUNCTION THAT TAKES COFFEE SHOTS RETURN TOTAL COFFEE VALUE OF ONE SHOTS = 30 ML //
#include <iostream>
using namespace std;

int coffee(int shots) {
    return shots * 30;  
}

int main() {
    int shots;
    cout << "Enter shots: ";
    cin >> shots;


    int result = coffee(shots);  

    cout << "Total coffee = " << result << " ml";
    return 0;
}