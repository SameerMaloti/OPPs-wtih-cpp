#include <iostream>
#include <string>
using namespace std;

class Teacher
{
    // properties/attributes
private:
    double salary;

public:
    // Parameterized Constructor
    Teacher(string n, string d, string s, double sal)
    {
        name = n;
        dept = d;
        subject = s;
        salary = sal;
    }

    string name;
    string dept;
    string subject;

    // Method to change department
    void changeDept(string newDept)
    {
        this->dept = newDept;
    }

    // Method to print teacher's information
    void getInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Subject: " << subject << endl;
        cout << "Department: " << dept << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main()
{
    // Creating an object with the correct data types
    Teacher t1("Shradha", "Computer Science", "C++", 25000);

    // Display teacher info
    t1.getInfo();

    // Changing department
    t1.changeDept("Mathematics");

    cout << "\nAfter changing department:\n";
    t1.getInfo(); // Print updated information

    return 0;
}
