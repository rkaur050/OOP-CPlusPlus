//A subclass inherits from a base class further which is also inherited from another base class
//Idea is like -> grandfather -> father -> child
#include<iostream>
using namespace std;
class A{
    int a;
    public:
        int getA(){
            cout<<"Enter value of a:";
            cin>>a;
            return a;
        }
};
class B:public A{
    int b;
    public:
        int getB(){
            cout<<"Enter value of b:";
            cin>>b;
            return b;
        }
};
class C:public B{
    int c;
    public:
        void getC(){
            cout<<"Enter value of b:";
            cin>>c;
        }
        void sum(){
            int a=getA();                   //getA() becomes member function of B and then the member function of C because of public inheritance from A to B and B to C
            int b=getB();                   //So, can be called directly by the member function of C
            getC();
            cout<<"\nSum:"<<a+b+c;
        }
};
int main()
{
    C obj;
    obj.sum();
    return 0;
}

//Friend functions are not inherited.