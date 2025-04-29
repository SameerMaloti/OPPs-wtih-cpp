#include<iostream>
#include<string>
using namespace std;

class Shape {
    public:
   virtual void draw()=0;
};

class Circle : public Shape{
public :
   void draw(){
    cout<<"Drawing a circle..."<<endl;
   }
};

class Square : public Shape{
    public :
    void draw(){
     cout<<"Drawing a Square..."<<endl;
    }
 };

 class Rectangle : public Shape{
public :
    void draw(){
     cout<<"Drawing a Rectangle..."<<endl;
    }
 };
int main()
{
   Circle c;
   c.draw();
}