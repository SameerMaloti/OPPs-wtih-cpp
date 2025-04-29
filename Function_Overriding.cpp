#include <iostream>
#include <string>
using namespace std;

class Print{
public:

void show(int x){
    cout<<"Integer: "<<x<<endl;
}
void show(double d){
    cout<<"double: "<<d<<endl;
}

void show(char ch){
    cout<<"Char: "<<ch<<endl;
}

};

int main(){
Print p1;
p1.show(2.5);
}
