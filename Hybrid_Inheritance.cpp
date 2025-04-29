#include <iostream>
#include <string>
using namespace std;

// Base Class
class person
{
public:
    string name;
    int age;
};

// Derived from person
class student : virtual public person
{
public:
    int rollNo;
};

// Derived from person
class teacher : virtual public person
{
public:
    string subject;
    double salary;
};

// Derived from student
class gradStudent : public student
{
public:
    string researchTopic;
};

// Derived from gradStudent and teacher
class TA : public gradStudent, public teacher
{

};

int main()
{

TA t1;
t1.name = "Rahul Sain";
t1.age = 27;
t1.researchTopic = "Physics";
    
cout<<t1.name<<endl;
cout<<t1.age<<endl;
cout<<t1.researchTopic<<endl;

}
