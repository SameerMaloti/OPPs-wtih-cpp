#include <iostream>
#include <string>
using namespace std;
class student
{

private:
    double idPass; // data hiding

public:
    string name;
    string branch;
    double rollNo;

    student(string n, string b, double roll)
    {
        name = n;
        branch = b;
        rollNo = roll;
    }

    void setPass(double idP)
    {
        idPass = idP;
    }

    void showDetails()
    {
        cout << "name : " << name << endl;
        cout << "Branch: " << branch << endl;
        cout << "Roll number: " << rollNo << endl;
        cout << "Id password: " << idPass << endl;
    }
};

int main()
{
    student s1("Raju", "Computer science", 123456);
    s1.setPass(1401);
    // cout << s1.name << endl;
    // cout << s1.branch << endl;
    // cout << s1.rollNo << endl;
    // cout << s1.idPass << endl;
    s1.showDetails();
}