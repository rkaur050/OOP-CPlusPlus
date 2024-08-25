//In case two different classes have to share a common function, a Friend function is made.
//It has access to private and protected members of class without being the member function.
//Declared with friend keyword and can be friend in any no. of classes
//Not in the scope of any class , can be invoked like a normal function.
//Cannot access member functions directly, have to use dot operator and object name

#include<iostream>
using namespace std;

class B;            //forward declaration

class A{
    int a;
    public:
        void set(int x){
            a=x;
        }
    friend void add(A,B);
};

class B{
    int b;
    public:
        void set(int x){
            b=x;
        }
    friend void add(A,B);
};

void add(A x,B y){
    cout<<"Sum:"<<x.a+y.b;
}

int main(){
    A a;
    a.set(10);
    B b;
    b.set(45);
    add(a,b);
    return 0;
}

//Member function of one class can be a friend of other class
/*
    class x{
            .....
        public:
            int fun1();
    };
    class y{
        ....
        public:
            friend int x::fun1();
    };
*/

//If all the member functions of one class are the friend of other class , then that class is called a friend class.
/*
    class y{
        ....
        friend class x;
    }
*/

//Exchange private values of two classes.