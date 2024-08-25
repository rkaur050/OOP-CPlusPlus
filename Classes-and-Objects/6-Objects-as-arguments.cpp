//Objects can be passed as arguments to a function either through pass-by-reference or pass-by-value
//Can also be passed to non-member functions as arguments but those functions can only access public members of class.

#include<iostream>
using namespace std;

class add{
    int x;
    public:
        void set(int a){
            x=a;
        }
        void sum(add obj1,add obj2){
            x=obj1.x+obj2.x;
        }
        void show(){
            cout<<"\nValue:"<<x;
        }
};

int main()
{
    add obj1,obj2,obj3;
    obj1.set(10);
    obj2.set(23);
    
    //obj1 and obj2 arguments to functions sum()
    obj3.sum(obj1,obj2);

    obj1.show();
    obj2.show();
    obj3.show();
    return 0;
}