//destructor //
#include <iostream>
using namespace std;

class Demo {
public:

    // Constructor
    Demo() {
        cout << "Constructor Called" << endl;
    }

    // Destructor
    ~Demo() {
        cout << "Destructor Called" << endl;
    }
};

int main() {

    Demo obj;

    return 0;
}