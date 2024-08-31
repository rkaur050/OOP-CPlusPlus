//Public and Protected members of base class are protected in derived class
#include<iostream>
using namespace std;
class Base{
    private:
        int a=1;
    protected:
        int b=2;
    public:
        int c=3;
        // this will be protected in derived class -> inaccessbile from derived class
        // void getPVT(){
        //     cout<<"Private:"<<a<<endl;
        // }
        
};
class Derived: protected Base{
    public:
        Derived(){};
        void getPROT(){
            cout<<"Protected:"<<b<<endl;
        }
        void getPub(){
            cout<<"Public:"<<c<<endl;
        }
        
};
int main()
{
    Derived obj;
    obj.getPROT();
    obj.getPub();
    return 0;
}

//No way to access private members of base class.