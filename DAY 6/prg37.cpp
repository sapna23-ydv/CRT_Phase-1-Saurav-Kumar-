//registration no. //
#include<iostream>
using namespace std;

class student{

    private:
    int registrationNo = 22399109 ;


    public:
    string name;
    int studentClass;

       void display(){
        cout<<"NAME:"<<name<<endl;
        cout<<"STUDENT CLASS:"<<studentClass<<endl;
        cout<<"REGISTRATION NO: "<<registrationNo<<endl;
        registrationNo++;
       }
    };
       int main(){
        student s1;
        s1.name ="shreya";
        s1.studentClass =10;
        s1.display();
       }