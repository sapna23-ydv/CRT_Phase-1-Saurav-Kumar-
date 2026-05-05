// write a function with argument and calling with or without parameter//
#include <iostream>
using namespace std;

void greet() {
    cout << "Hello!" << endl; 
}

void greetName(string name) {
    cout << "Hello " << name << endl;
}

int main() {
    greet();             
    greetName("Sapna");   
    return 0;
}
