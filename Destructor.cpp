#include<iostream>
#include<string>
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
        // destructor
        ~student(){
            cout<<"I am a Destructor!"<<endl;
             delete cgpaPtr;
        }
        getInfo()
        {
            cout << "Name: " << name << endl;
            cout << "Cgpa: " << *cgpaPtr << endl;
        }
    };
int main (){
   student s1("Anand Bihari",8.9);
   s1.getInfo();
}