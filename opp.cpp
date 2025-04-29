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
   string dept;
   string subject;

   void setSalary(double s)
   {
      salary = s;
   }
   double getSalary()
   {
      return salary;
   }
};

int main()
{
   Teacher t1;
   t1.name = "Shradha";
   t1.subject = "c++";
   t1.dept = "Computer science";
   t1.setSalary(25000);

   cout << "The name of teacher is " << t1.name << endl;
   cout << "The name of subject is " << t1.subject << endl;
   cout << "The name of department is " << t1.dept << endl;
   cout << "The salary of teacher is " << t1.getSalary() << endl;
   
   return 0;
}