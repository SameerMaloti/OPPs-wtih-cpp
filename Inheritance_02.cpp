#include <iostream>
#include <string>
using namespace std;

class person
{
public:
    string name;
    int age;
    person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
    ~person()
    {
        cout << "Parent destructor" << endl;
    }
};
class student : public person
{
public:
    int rollNo;
    student(string name, int age, int rollNo) : person( name,  age)
    {
        this->rollNo = rollNo;
    }
    ~student()
    {
        cout << "Child destructor" << endl;
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
    student s1("Rahul",20,12345);
    s1.getInfo();
}