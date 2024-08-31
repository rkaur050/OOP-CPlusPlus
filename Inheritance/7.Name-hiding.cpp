/*Function Overloading and Inheritance:
Function overloading allows multiple functions with the same name but different parameters within a single class.
When you inherit from a base class and define a function in the derived class with the same name as one in the base class, it hides the base class’s function(s) with that name, regardless of their parameter lists. This is known as name hiding.

Name Hiding:
Name hiding occurs when a derived class defines a function with the same name as a function in the base class. This hides all functions with that name in the base class, even if they have different parameter lists.
To access the hidden functions from the base class, you need to use the using directive in the derived class.
*/

#include<iostream>
using namespace std;
class A{
    public:
        void display(){
            cout<<"Base class display"<<endl;
        }
        void display(int x){
            cout<<"Base class display (int):"<<x<<endl;
        }
};
class B:public A{
    public:
        void display(){
            cout<<"Derived class display"<<endl;
        }
        void display(double d){
            cout<<"Derived class display(double):"<<d<<endl;
        }
};
int main()
{
    B obj;
    obj.display();
    obj.display(4);       //calls display(double)
    obj.display(4.3);    //calls display(double)
    return 0;
}
