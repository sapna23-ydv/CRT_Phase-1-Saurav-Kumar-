//wap using function that apply 10%discount using refernces update original bill amount and print it//
#include <iostream>
using namespace std;

void applyDiscount(float &bill) {
    bill = bill - (bill * 0.10);  
}

int main() {
    float bill;
     
    cout << "Enter bill amount: ";
    cin >> bill;

    applyDiscount(bill);   

    cout << "Final bill after 10% discount = " << bill << endl;

    return 0;
}