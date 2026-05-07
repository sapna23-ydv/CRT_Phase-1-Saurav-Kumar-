//multiple inhertence//
#include<iostream>
using namespace std;

// Parent class 1
class Player {
public:
    string name;

    void setName(string n) {
        name = n;
    }
};

// Parent class 2
class Team {
public:
    string teamName;

    void setTeam(string t) {
        teamName = t;
    }
};

// Child class
class Cricketer : public Player, public Team {
public:
    void show() {
        cout << "Name: " << name << endl;
        cout << "Team: " << teamName << endl;
    }
};

int main() {

    Cricketer c1;

    c1.setName("Virat");
    c1.setTeam("India");

    c1.show();

    return 0;
}