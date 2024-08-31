//Single pointer variable can be made to point to objects belonging to different classes.
//if B is a base class and D is a derived class then the a pointer declared as a pointer to B acna also be made to point to D.
//But this pointer cannot be made to access all the members of derived class.
//It can only access those members which are inherited from B by D.

//the compiler ignores the content of the pointer and chooses the member functions which match the type of pointer.

#include<iostream>
using namespace std;

class B{
    public:
        int b;
        void show(){
            cout<<"b:"<<b<<endl;
        }
};
class D:public B{
    public:
        int d;
        void show(){
            cout<<"b:"<<b<<endl;
            cout<<"d:"<<d<<endl;
        }
};
int main()
{
    B *bptr;                //base pointer
    B base;
    bptr=&base;            //base object address assigned to bptr

    bptr->b=10;
    cout<<"bptr points to base object:\n";
    bptr->show();

    D derived;
    bptr=&derived;          //dervied object address assigned to bptr
    bptr->b=200;
    // bptr->d=300             //d is not inherited from B, inaccessible by bptr

    cout<<"bptr now points to derived object:\n";
    bptr->show();           //call is made to show() of base class B 

    D *dptr;
    dptr=&derived;
    dptr->d=30;
    cout<<"dptr dervied class pointer\n";
    dptr->show();            //call is made to show() of derived class D

    //type-casting bptr to derived class pointer
    cout<<"bptr type-casted to derived class pointer:\n";
    ((D*)bptr)->d=400;
    ((D*)bptr)->show();        //call made to show() of derived class D
    
    return 0;
}