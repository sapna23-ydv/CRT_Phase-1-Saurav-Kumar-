//take a function that takes an length and width as a input return print the area of rectangle//
#include <iostream>
using namespace std;

int calculateArea(int length, int width) {
    return length * width;
}

int main() {
    int length, width;
    cout << "Enter the length and width of the rectangle: ";
    cin >> length >> width;
    cout << "The area of the rectangle is: " << calculateArea(length, width) << endl;
    return 0;
}