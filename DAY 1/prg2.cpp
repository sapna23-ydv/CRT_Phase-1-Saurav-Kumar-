// wap c++ that takes a interger as  input form user print all the no.  between 1 to n which is divisibale by 2//* 
#include <iostream>
using namespace std;

int main() {
    int n, i = 1;

    cout << "Enter a num: ";
    cin >> n;

    cout << "Numbers divisible by 2 between 1 and " << n << " are:" << endl;

    while(i <= n) {
        if(i % 2 == 0) {
            cout << i << " ";
        }
        i++;
    }

    return 0;
}
