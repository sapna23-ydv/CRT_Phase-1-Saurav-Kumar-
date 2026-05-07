//copy constructor //
#include <iostream>
using namespace std;
class cricketer {
    string name;
    int runs;
    
    public:
    cricketer( string name, int r)
    {
        this->name = name; 
        runs = r;
    }

    cricketer(cricketer & c){
        this->name=c.name;
        this->runs=c.runs;

    }
    void show(){
        cout<<"Name:"<<name<<endl;
        cout<<"Runs:"<<runs<<endl;
    }
};
    int main ()
    {
        cricketer c1("virat",12000);
        c1.show();
        cricketer c2(c1);
        c2.show();
        return 0;
    }

