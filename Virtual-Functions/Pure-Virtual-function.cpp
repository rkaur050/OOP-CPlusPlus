//A pure virtual function is a virtual function which has no definition in the base class and can be declared with 0 as '=0'
//It makes the base class an abstract class
//Instances of abstract class cannot be made directly
//A class is abstract if it has at least one pure virtual function.
//If we do not override the pure virtual function in the derived class, then the derived class also becomes an abstract class.

#include<iostream>
using namespace std;

class Shape{                            //Abstract Base Class
    public:
    virtual void draw()=0;
    void description(){
        cout<<"This is a shape\n";
    }
};
class Rectangle:public Shape{
    public:
    void draw(){
        cout<<"Drawing a rectangle\n";
    }
};
class Circle:public Shape{
    public:
    void draw(){
        cout<<"Drawing a circle\n";
    }
};
int main()
{
    //Shape s;      error:object of abstract class can't be made
    Circle c;
    Rectangle r;

    //Using polymorphism
    Shape* s1=&c;
    Shape* s2=&r;
    s1->description();
    s1->draw();
    s2->description();
    s2->draw();
    return 0;
}