#include <iostream>
#include <string>
using namespace std;

class Teacher
{
    // properties/attributes
private:
    double salary;

public:
    string name;
    string department;
    string subject;
    // parameterized
    Teacher(string n, string dept, string sub, double sal)
    {
       this-> name = name;
       this-> department = department;
       this-> subject = subject;
       this-> salary = salary;
    }

    // copy constructor
    Teacher(Teacher &orgObj)
    {
        cout << "I am a copy constructor" << endl;
        this->name = orgObj.name;
        this->department = orgObj.department;
        this->subject = orgObj.subject;
        this->salary = orgObj.salary;
    }

    void getInfo()
    {
        cout << "name : " << name << endl;
        cout << "subject : " << subject << endl;
        cout << "department : " << department << endl;
        cout << "salary :" << salary << endl;
    }
};

int main()
{
    Teacher t1("shradha", "Computer Science", "c++", 25000);
    t1.getInfo();
    Teacher t2(t1);
    t2.getInfo();

}