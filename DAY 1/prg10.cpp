//Write a C++ program that uses two constant variables for username and password. The program should take username and password as input from the user. If both match the predefined values, display ‘Valid’; otherwise, display ‘Invalid’.//
#include <iostream>
using namespace std;

int main() {
    const string correctUsername = "admin";
    const string correctPassword = "1234";

    string username, password;

    cout << "Enter username: ";
    cin >> username;

    cout << "Enter password: ";
    cin >> password;

    if (username == correctUsername && password == correctPassword) {
        cout << "Valid" << endl;
    } else {
        cout << "Invalid" << endl;
    }

    return 0;
}