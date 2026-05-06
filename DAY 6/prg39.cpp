//parameterized constructor//
#include <iostream>
using namespace std;

class Cricketers {
public:
    string name;
    int runs;
    double avg;

    // Constructor
    Cricketers(string n, int r, double a) {
        name = n;
        runs = r;
        this->avg = a;   // ✔ correct assignment
    }

    // Function (separate from constructor)
    void show() {
        cout << "NAME: " << name << endl;
        cout << "RUNS: " << runs << endl;
        cout << "AVERAGE: " << avg << endl;
    }
};   // ✔ semicolon required

int main() {
    Cricketers c1("Sachin", 10000, 50.5);

    c1.show();

    return 0;
}