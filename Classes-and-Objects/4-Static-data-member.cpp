//Associated with the class rather than its objects , known as - Class Variable.
//Allocated memory only once and is shared among all instances of the class.
//Initialized to zero when first object of class is created.
//Exists and maintains its value for the entire duration of program independent of the any object.
//For non-static data members when the object goes out of scope or is destroyed the memory allocated to members also deallocated.

//Used to maintain values common to entire class.
//Can be used as a counter to record the occurrences of all objects of class.

//Declaration inside class - informs compiler about existence of static member
//Definition outside class - allocates memory and initializes it

//Defintion must be done outside the class ->
//To avoid linker error. If it is defined inside the class and included in multiple source files
//this results in conflicts  as linker cannot determine which one to use.
//Also to ensure that there is only one definition for all objects.

#include<iostream>
using namespace std;

class item{
    static int count;                 
    int num;
    public:
        void getData(int a){
            count++;
            num=a;
        }
        void getCount(){
            cout<<"Count:"<<count<<"\n";
        }
};

int item::count;                  //outside class definition  - default initial value=0
int main()
{
    item a,b,c;
    a.getData(10);
    b.getData(20);
    c.getData(30);
    a.getCount();
    b.getCount();
    c.getCount();
    return 0;
}