#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    string name;
    double *cgpaPtr;

    Student(string name, double cgpa)
    {
        // this->name = name;
         this->name = name;
        
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }
    // Student(Student &orgObj)
    // {
    //     this->name = orgObj.name; 
    //     this->cgpaPtr = orgObj.cgpaPtr;
    // }
    void getInfo()
    {
        cout << "name : " << name << endl;
        cout << "cgpa : " << *cgpaPtr << endl;
    }
};

int main()
{
    Student s1("Anand bihari", 8.8);
    Student s2(s1);

    s1.getInfo();
    *s2.cgpaPtr = 9.2;
   
    s1.getInfo();
    s2.name = " Neha";
    s2.getInfo();

    return 0;
}