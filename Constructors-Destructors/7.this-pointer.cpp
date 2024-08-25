//this pointer -> a special pointer which refers to the current instance of the class
//implicit pointer that points to the object for which the member function is called
//allows member functions to access object's data members
//differentiates between member variables and parameters with the same name
//used to return the object itself from the member function which enables - METHOD CHANING
//NOTE - only available for non static member functions as static member functions do not operate on instances
//NOTE - Scope Resolution Operator (::) used for accessing static or class members


#include<iostream>
using namespace std;
class MyClass{
    int value;
    public:
        MyClass(int value):value(value){};
        MyClass& setValue(int value){
            cout<<this->value<<endl;
            this->value=value;               //differentiating member variable and parameter
            return *this;                    //returning the object
        }
        void showValue(){
            cout<<this->value;             //accessing member variable
        }
};
int main()
{
    MyClass obj(30);
    obj.setValue(100).showValue();         //method chaining
    return 0;
}