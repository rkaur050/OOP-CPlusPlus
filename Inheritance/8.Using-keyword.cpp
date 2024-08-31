//To overload a function of base class in dervied class , we can unhide the function with the help of 'using' keyword.

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
        using A::display;                     //bringing all base class overloaded functions to derived class
        void display(double d){
            cout<<"Derived class display(double):"<<d<<endl;
        }
};
int main()
{
    B obj; 
    obj.display();
    obj.display(4);       //calls display(int)
    obj.display(4.3);    //calls display(double)
    return 0;
}
