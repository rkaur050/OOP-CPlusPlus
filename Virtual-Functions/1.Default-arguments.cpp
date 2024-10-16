//Default arguments are evaluated at compile time.
//Virtual Functions are evaluated at run time.
//When a call to virtual function is made the , the function that will be called is resolved at run time based on the type of object.
//But the default value that will be used is determined at compiler time based on the type of pointer or reference.

#include<iostream>
using namespace std;
class Base{
    public:
    virtual void show(int x=10){
        cout<<"Base class show :"<<x<<endl;
    }
};
class Derived:public Base{
    public:
    void show(int x=20) override{
        cout<<"Derived class show:"<<x<<endl;
    }
};
int main()
{
    Derived d;
    Base *bptr;
    bptr=&d;
    bptr->show();
    return 0;
}

//Removing virtual keyword from Base class will lead to the calling of Base class show() function as this will be resolved at compile time based on type of pointer.
//Adding it calls Derived class show() as this will be resolved at run time.
