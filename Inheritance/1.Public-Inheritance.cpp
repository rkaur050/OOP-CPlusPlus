//Public and protected members of base class are public and protected in dervied class
//One to one relationship between base and derived class -> Single Inheritance
#include<iostream>
using namespace std;
class Base{
    private:
        int a=1;
    protected:
        int b=2;
    public:
        int c=3;
         void getPVT(){
            cout<<"Private:"<<a<<endl;
        }
        
};
class Derived: public Base{
    public:
        Derived(){};
        void getPROT(){
            cout<<"Protected:"<<b<<endl;
        }
};
int main()
{
    Derived obj;
    obj.getPVT();
    obj.getPROT();
    cout<<"Public:"<<obj.c;
    return 0;
}