#include <iostream>
#include <string>
using namespace std;

class student
{
public:
    string name;
    double *cgpaPtr;

    student(string name, double cgpa)
    {
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }
    student(student &obj)
    {
        this->name = obj.name;
        cgpaPtr = new double;
        *cgpaPtr = *(obj.cgpaPtr);
    }
    getInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Cgpa: " << *cgpaPtr << endl;
    }
};

int main()
{
    student s1("Rahul", 8.5);
    s1.getInfo();

    student s2(s1);
    *(s2.cgpaPtr) = 9.2;
    s2.name = " Neha";
    
    s1.getInfo();
    s2.getInfo();
}