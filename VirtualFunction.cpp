#include <iostream>
#include <string>
using namespace std;

class Parent{
    public:
    show(){
        cout<<"Parent class..."<<endl;
    }
     
    virtual void hello(){
        cout<<"Hello from Parent class...";
    }
};
class Child : public Parent{
    public:
    show(){
        cout<<"Child class..."<<endl;
    }
     void hello(){
        cout<<"Hello from Child class...";
    }
};


int main(){
Child c1;
c1.hello();

}
