#include <iostream>
#include <string>
using namespace std;

class Teacher
{
    // properties/attributes
private:
    double salary;

public:
    // non paremeterized
    Teacher()
    {
        dept = "Computer science"; 
    }
    string name;
    string dept;
    string subject;

    void setsalary(double s)
    {
        salary = s;
    }
    double getsalary()
    {
        return salary;
    }
};


int main()
{
    Teacher t1;
    t1.name = "shradha";
    t1.subject = "c++";
    t1.setsalary(25000);

    cout << "The name of teacher is " << t1.name << endl;
    cout << "The name of subject is " << t1.subject << endl;
    cout << "The name of department is " << t1.dept << endl; // 
    cout << "The salary of teacher is " << t1.getsalary() << endl;

    return 0;
}