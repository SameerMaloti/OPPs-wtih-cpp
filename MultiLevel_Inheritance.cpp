#include <iostream>
#include <string>
using namespace std;

class person
{
public:
    string name;
    int age;
};

class student : public person
{
public:
    int rollNo;
};

class gradStudent : public student {
    public:
    string researchArea;
};

int main()
{
    gradStudent s1;
    s1.name = "Raj";
    s1.researchArea = "Wave optics";
    cout<<s1.name<<endl;
    cout<<s1.researchArea<<endl;
}