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
    string dept;
    string subject;
    // paremeterized
    Teacher(string name, string department, string subject, double salary)
    {
        this->name = name;
        this->dept = department;
        this->subject = subject;
        this->salary = salary;
    }

    void getInfo()
    {
        cout << "name : " << name << endl;
        cout << "subject : " << subject << endl;
        cout << "dept : " << dept << endl;
        cout << "salary :" << salary << endl;
    }
};

int main()
{
    Teacher t1("shradha", "Computer Science", "c++", 25000);

    t1.getInfo();
    return 0;
}