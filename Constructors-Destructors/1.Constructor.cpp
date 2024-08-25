//A special function used to initialize the objects of the class.
//Has same name as the name of the class
//Invoked whenever the object of its associated class is created
//Have no return types, cannot return values
//Default Constructor - have no arguments
//Mandatory to define, if its declared
//Cannot be inherited
//Should be declared in public section only
//Memory address cannot be fetched

#include<iostream>
using namespace std;

class item{
    int num;
    float cost;
    public:
        item();                        //constructor declaration
        void showdata(){
            cout<<"\nNumber:"<<num;
            cout<<"\nCost:"<<cost;
        }
};
item:: item(){                        //constructor definition
    num=10;
    cost=56.05;
}
int main()
{
    item a;
    item b;
    a.showdata();
    b.showdata();
    return 0;
}