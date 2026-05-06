//write a c++ program to create a student management system where we store a nd disply student details -name ,roll no. ,email, phn no.,marks,registration no.,using parametrized using default contrusctor//
#include <iostream>
using namespace std;

class Student {
private:
    string name, email, phone, regNo;
    int rollNo;
    float marks;

public:
    // Default Constructor
    Student() {
        name = "Not Assigned";
        email = "Not Assigned";
        phone = "Not Assigned";
        regNo = "Not Assigned";
        rollNo = 0;
        marks = 0.0;
    }

    // Parameterized Constructor
    Student(string n, int r, string e, string p, float m, string reg) {
        name = n;
        rollNo = r;
        email = e;
        phone = p;
        marks = m;
        regNo = reg;
    }

    // Function to display details
    void display() {
        cout << "\nStudent Details:\n";
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Email: " << email << endl;
        cout << "Phone: " << phone << endl;
        cout << "Marks: " << marks << endl;
        cout << "Registration No: " << regNo << endl;
    }
};

int main() {
    // Using default constructor
    Student s1;
    cout << "Default Student:";
    s1.display();

    // Using parameterized constructor
    Student s2("Sapna", 101, "sapna@gmail.com", "9876543210", 89.5, "REG123");
    cout << "\n\nParameterized Student:";
    s2.display();

    return 0;
}