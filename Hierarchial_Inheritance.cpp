#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    string name;
    int age;
};

class Student : public Person
{
public:
    int rollNo;
};

class Teacher : public Person{
public:
     string subject;
};


int main()
{
    Student s1;
    s1.name = "Raj";
    s1.age = 20;
    s1.rollNo = 12345;
    
    Teacher t1;

    t1.name = "Lalit sir "; 
    t1.subject = "Digital Electronics";

    cout<<s1.name<<endl;
    cout<<s1.rollNo<<endl;
    cout<<s1.age<<endl;
    cout<<"---------------------------"<<endl;
    cout<<t1.name<<endl;
    cout<<t1.subject<<endl;
}