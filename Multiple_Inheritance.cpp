#include <iostream>
#include <string>
using namespace std;

class student
{
public:
    string name;
    int rollNo;
};

class teacher
{
public:
    string subject;
    double salary;
};

class TA : public student, public teacher
{

};

int main()
{
    TA t1;

    t1.name = "Raj";
    t1.rollNo = 12345;
    t1.subject = "Physics";

    cout<<t1.name<<endl;
    cout<<t1.rollNo<<endl;
    cout<<t1.subject<<endl;
}