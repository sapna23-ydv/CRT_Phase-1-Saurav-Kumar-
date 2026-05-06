//oops : student name , class , rollno.//
#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int studentClass;
    int rollNo;

public:
    // Function to take input
    void input() {
        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Class: ";
        cin >> studentClass;

        cout << "Enter Roll No: ";
        cin >> rollNo;
    }

    // Function to display data
    void display() {
        cout << "\n--- Student Details ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Class: " << studentClass << endl;
        cout << "Roll No: " << rollNo << endl;
    }
};

int main() {
    Student s1;   // object

    s1.input();   // calling function
    s1.display(); // calling function

    return 0;
}
