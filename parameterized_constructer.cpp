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
    // parameterized
    Teacher(string n, string d, string s, double sal)
    {
        name = n;
        dept = d;
        subject = s;
        salary = sal;
    }

   

    void getInfo()
    {
        cout << "name : " << name << endl;
        cout << "subject : " << subject << endl;
        cout << "department : " << dept << endl;
        cout << "salary :" << salary << endl;
    }
};

int main()
{
    Teacher t1("shradha", "Computer Science", "c++", 25000);

    t1.getInfo();
    return 0;
}