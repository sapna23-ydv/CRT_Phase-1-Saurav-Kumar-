//area of rectangle ,square and circle using function overloading//
#include <iostream>
using namespace std;

class Area {
public:    
    int length;
    int width;

    // Default constructor
    Area() {
        length = 0;
        width = 0;
    }

    // Rectangle constructor
    Area(int length, int w) {
        this->length = length;
        width = w;
    }

    // Square constructor
    Area(int s) {
        length = s;
        width = s;
    }

    // Function to show area
    void show() {
        cout << "Length: " << length << ", Width: " << width << endl;
        cout << "Area: " << length * width << endl;
    }
};  // ✅ class ends here

int main() {
    Area a1;        // default
    Area a2(5, 4);  // rectangle
    Area a3(6);     // square

    cout << "Default Constructor:" << endl;
    a1.show();

    cout << "\nRectangle:" << endl;
    a2.show();

    cout << "\nSquare:" << endl;
    a3.show();

    return 0;
}