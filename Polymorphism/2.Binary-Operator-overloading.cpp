//Operator overloading allows you to define how operators like +, -, *, etc., work with user-defined types.

#include<iostream>
using namespace std;
class complex{
    int real;
    int imag;
    public: 
    //constructor overloading
    complex(){};                                       
    complex(int r,int i):real(r),imag(i){};
    
    complex operator+(complex &other){                   //Binary-operator overloading
        complex res;
        res.real=real+other.real;
        res.imag=imag+other.imag;
        return res;
    }
    void show(){
        cout<<this->real<<"+ i "<<this->imag;
    }
};
int main()
{
    complex a(2,4),b(5,6);
    complex c=a+b;                      //here, a is pointed by this pointer(LHS) and the other object is b(RHS)
    c.show();
    return 0;
}