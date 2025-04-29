#include <iostream>
#include <string>
using namespace std;

class person
{
public:
    string name;
    int age;
    person()
    {
        cout << "Parent class!" << endl;
    }
    ~person(){
        cout<<"Parent destructor"<<endl;
    }
};
    class student : public person
    {
        public:
        int rollNo;
    student(){
        cout<<"Derived/Child class!"<<endl;
    }
    ~student(){
        cout<<"Child destructor"<<endl;
    }
    getInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll number: " << rollNo << endl;
    }
};
int main()
{
    student s1;
    s1.name = "Raj";
    s1.age = 19;
    s1.rollNo = 123456;

    s1.getInfo();
}