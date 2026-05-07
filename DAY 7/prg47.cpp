// hybrid inheritance //

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

// Derived class from Player
class Cricketer : public Player {
public:
    int runs;

    void setRuns(int r) {
        runs = r;
    }
};

// Another parent class
class Team {
public:
    string teamName;

    void setTeam(string t) {
        teamName = t;
    }
};

// Hybrid inheritance
class IndianCricketer : public Cricketer, public Team {
public:
    string state;

    void setState(string s) {
        state = s;
    }

    void show() {
        cout << "Name  : " << name << endl;
        cout << "Runs  : " << runs << endl;
        cout << "Team  : " << teamName << endl;
        cout << "State : " << state << endl;
    }
};

int main() {

    IndianCricketer c1;

    c1.setName("Dhoni");
    c1.setRuns(150);
    c1.setTeam("India");
    c1.setState("Jharkhand");

    c1.show();

    return 0;
}