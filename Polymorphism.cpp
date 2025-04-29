#include <iostream>
#include <string>
using namespace std;

class student {
   public:
   string name ;
   student(){
     cout<<"Non-Parametrized constructor";
   }
   student(string name ){
    this->name = name ;
    cout<<"Parameterized Constructor";
   }
};

int main(){
student s1;


}
