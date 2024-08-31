//Run-Time Polymorphism -> late or dynamic binding -> function definition is binded with its call during run time.

//Function overriding is a type of polymorphism in which we redefine the function with same signature to perform different tasks.
//When the same name function is redefined in inhertied class the object makes call to this function but not that of the base class.

//This does not work without inheritance. The two functions belong to different scopes.
//This is done using the 'virtual' keyword or 'virtual function'

//Virtual functions allow us to create a list of base class pointers and call methods of any of the derived classes without even knowing the kind of derived class object. 

//allows compiler to determine which function to run based on the type of object pointed to by the pointer rather than the type of pointer.

//Virtual functions are never inline as they are resolved at run time making inlining impractical.

#include<iostream>
using namespace std;

class B{
    public:
    void display(){
        cout<<"Display base..\n";
    }
    virtual void show(){
        cout<<"Show base..\n";
    }
};
class D:public B{
    public:
        void display(){
            cout<<"Display derived..\n";
        }
         void show() override{                      //not necessary to use override keyword
            cout<<"Show derived..\n";
        }
};
int main()
{
    B base;
    D derived;
    B *bptr;
    bptr=&base;
    cout<<"bptr points to Base B\n";
    bptr->display();
    bptr->show();

    cout<<"bptr points to derived D\n";
    bptr=&derived;
    bptr->display();
    bptr->show();
    return 0;
}