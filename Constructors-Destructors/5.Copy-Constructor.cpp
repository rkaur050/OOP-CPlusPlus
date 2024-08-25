//Copy constructor takes the reference to an object of the same class as itself as the argument
//Initializes an object using another object of the same class.
#include<iostream>
using namespace std;

class item{
    int num;
    float cost;
    public:
        item():num(34),cost(56.423){};        
        item(item &a){
            cost=a.cost;
            num=a.num;
        }                      
        void showdata(){
            cout<<"\nNumber:"<<num;
            cout<<"\nCost:"<<cost;
        }
        void putdata(int a,float b){
            num=a;
            cost=b;
        }
};

int main()
{  
    item a;                   
    item b(a);              //copy constructor - >implicit call
    item c;
    c.putdata(34,67.5);     
    item d=c;                //copy constructor 
    item e;            
    a.showdata();
    b.showdata();
    cout<<endl;
    c.showdata();
    d.showdata();
    e=a;                  //assignment operator
    e.showdata();
    return 0;
}

/*If we don't define a copy constructor for a class, the compiler generates one on its own.This is done for the following reasons:
1.Passing an object by value to a function
2.Returning an object from a function
3.Copying one object to another object of the class
*/

/* Compiler generated copy constructor performs Shallow Copy.
SHALLOW COPY -> It copies all the member variables of the original object to the new object. However, if the object contains pointers, only the pointer addresses are copied, not the actual data pointed to by the pointers.
Characteristics of Shallow Copy:
Copying Pointers: The copied object will point to the same memory locations as the original object.
Efficiency: Shallow copy is generally faster and more efficient because it only involves copying the memory addresses (pointers).
Potential Issues:
Double Free: If the original object and the copied object both try to delete the same dynamically allocated memory (because they share the same pointer), it can lead to double-free errors.
Dangling Pointers: If one object modifies or deletes the dynamically allocated memory, the other object might end up with a pointer to invalid memory, leading to undefined behavior.
*/

/* DEEP COPY->
involves creating a new copy of the object and also creating copies of the dynamically allocated memory or resources that the object manages. This ensures that the new object and the original object do not share pointers to the same memory locations
Characteristics of Deep Copy:
Copying Data: Deep copy duplicates the actual data pointed to by pointers, so each object has its own separate memory.
Safety: Deep copying prevents issues like double deletion and dangling pointers because the copied object has its own independent memory.
Performance Overhead: Deep copying can be more expensive in terms of memory and processing time because it involves duplicating the data rather than just copying pointers.
*/


/* DIFFERENCES
Basic Data Members
Shallow Copy: Copies the values of basic data members (e.g., int, float, char) directly. Each object ends up with its own separate copy of these values in different memory locations.
Deep Copy: Also copies the values of basic data members, resulting in each object having its own separate copy of these values in different memory locations. In this case, there is no difference from shallow copy for basic data members.
Pointers (Dynamic Memory)
Shallow Copy:

Pointer Copying: Copies only the pointer addresses. Both the original and copied objects point to the same memory location.
Shared Data: Both objects share the same dynamically allocated memory. This can lead to issues such as double-free errors or dangling pointers if one object is modified or deleted.
Deep Copy:

Data Copying: Allocates new memory and copies the actual data pointed to by the pointers. Each object gets its own independent copy of the data.
Independent Data: The objects do not share the same memory; changes to the data in one object do not affect the other.
*/
