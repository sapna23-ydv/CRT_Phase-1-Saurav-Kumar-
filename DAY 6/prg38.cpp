//constructor//
#include <iostream>
using namespace std;

 class student{
    public:
    string name ;
    int rollNo;

    student(){
        name="sapna";
        rollNo=87;

    }

    void show(){
        cout<<"NAME:"<<name<<endl;
        cout<<"ROLL NO:"<<rollNo<<endl;
        cout<<"Default constructor is called"<<endl;
    }
};
 int main(){
    student s1;
    s1.show();

    return 0;
 }