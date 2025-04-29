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
   string department;
   string subject;

   // parameterized constructor

   Teacher(string n, string dept, string sub)
   {
      name = n;
      department = dept;
      subject = sub;
   }

   void setSalary(double s)
   {
      salary = s;
   }
   double getSalary()
   {
      return salary;
   }
   
   void showDetails()
   {
      cout << "Name: " << name << endl;
      cout << "Department: " << department << endl;
      cout << "Subject: " << subject << endl;
      cout << "Salary: " << salary << endl;
   }
};

int main()
{
   Teacher t1("shradha", "Computer Science", "c++"); // constructor call
   t1.setSalary(25000);
   t1.showDetails();

   return 0;
}