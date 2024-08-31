//Functor is a c++ class that behaves like a function.
//It has overlaoded operator() which allows objects of class to be used like a normal function.

#include<iostream>
using namespace std;
class Add{
    int value;
    public:
        Add(int val):value(val){};
        int operator()(int x) const{
                return x+value;
        }
};
int main()
{
    Add addfive(5);               //addfive is an object which sets the value = 5 .. and now it will behave like a function object
    Add addTen(10);
    int res1=addfive(6);         //adding the value set by addfive i.e 5 to the argument passed in function object.
    int res2=addTen(6);
    cout<<res1<<" "<<res2;
    return 0;
}