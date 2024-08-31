//new operator performs two tasks -> allocate memory to object on heap and then calls the constructor(initializes the object)
//Operator new() only performs memory allocation, manually memort dealllocation or object initialization.

#include<iostream>
using namespace std;
class A{
    public:
        A(){cout<<"Constructor called!\n";}
        ~A(){cout<<"Destructor called!\n";}
};
int main()
{
    A *obj=new A();      //allocates memory and calls constructor
    void *rawMemory=operator new(sizeof(A));  //allocate memory
    A* obj2=new (rawMemory) A();               //constructor call for the preallocated memory

    delete obj;        //destructor call & memory deallocation
    obj2->~A();       //manual destructor call   
    operator delete(rawMemory);          //manual memory deallocation

    return 0;
}