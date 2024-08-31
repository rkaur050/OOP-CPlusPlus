//Public and Protected members of base class becomes private members of derived class
#include<iostream>
using namespace std;
class Base{
    private:
        int a=1;
    protected:
        int b=2;
    public:
        int c=3;
        // this will be private in derived class -> inaccessbile from derived class
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
        //inaccessible from derived class as private of base class
        // void getPVT(){                           
        //     cout<<"Private:"<<a<<endl;
        // }
        
};
int main()
{
    Derived obj;
    obj.getPROT();
    obj.getPub();
    return 0;
}

//No way to access private members of base class.