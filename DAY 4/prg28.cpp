//
#include <iostream>
using namespace std;

int main(){
    int value = 10; 
    int *ptr = &value;
    
    cout << "Add:" <<ptr << endl;
    cout << "value:" <<*ptr << endl;

    *ptr = 20;
    cout << "value:" <<*ptr << endl;
    cout << "value:" <<value << endl;

    return 0;
}