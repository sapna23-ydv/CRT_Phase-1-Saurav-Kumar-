//hierarchial inheritance//

#include <iostream>
using namespace std;

// Parent class
class Player {
public:
    string name;

    void setName(string n) {
        name = n;
    }
};

// First child class
class Cricketer : public Player {
public:
    int runs;

    void setRuns(int r) {
        runs = r;
    }

    void showCricketer() {
        cout << "Cricketer Name: " << name << endl;
        cout << "Runs: " << runs << endl;
    }
};

// Second child class
class Footballer : public Player {
public:
    int goals;

    void setGoals(int g) {
        goals = g;
    }

    void showFootballer() {
        cout << "Footballer Name: " << name << endl;
        cout << "Goals: " << goals << endl;
    }
};

int main() {

    // Object of Cricketer class
    Cricketer c1;
    c1.setName("Virat");
    c1.setRuns(120);

    // Object of Footballer class
    Footballer f1;
    f1.setName("Messi");
    f1.setGoals(80);

    c1.showCricketer();

    cout << endl;

    f1.showFootballer();

    return 0;
}