//multilevel inheritance//

#include<iostream>
using namespace std;
//parent class/
class player
{
    public:
    string name;
    int age;

    void setName(string n){
        name = n;
    }
};

//child class//
class cricketers : public player{
    public :
    int age;
    void setAge(int a) 
    {
        age = a;
    }
    
};

class Indiancrickter: public cricketers{
    public:
    string state;

    void setState(string s)
    {
        state = s;
    }
    void show(){
        cout<<"name:"<<name<<endl;
        cout<<"age:"<<age<<endl;
        cout<<"state:"<<state<<endl;
    }

};
int main(){
  int a;
  cin>>a;
  string s;
  cin>>s;

  Indiancrickter c1;
  c1.setName("dhoni");
  c1.setAge(a);
  c1.setState(s);
  c1.show();
  
  return 0; 
}