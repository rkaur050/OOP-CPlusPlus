//A derived class with more than one base class.
//Constructors are called in same order in which the classes are inherited..
//Destructors are called in opposite order.
#include<iostream>
using namespace std;
class A{
    public:
    A(){cout<<"\nConstructor A";};
    ~A(){cout<<"\nDestructor A";};
};
class B{
    public:
    B(){cout<<"\nConstructor B";};
    ~B(){cout<<"\nDestructor B";};
};
class C:public B,protected A{
    public:
    C(){cout<<"\nConstructor C";};
    ~C(){cout<<"\nDestructor C";};
};
int main()
{
    C obj;
    return 0;
}