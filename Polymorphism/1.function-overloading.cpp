//Compile-time Ploymorphism -> a type of polymorphism that is resolved at compile time.
//he decision about which method or operator to invoke is made at the time the code is compiled. 
//Since this decision is made early, it generally leads to faster execution , also known as static/early binding.

//Function Overloading ->mulitple functions with same name but different parameters (no. of type of parameters)

#include<iostream>
using namespace std;
class printer{
    public:
        void print(int num){
            cout<<num<<endl;
        }
        void print(double num){
            cout<<num<<endl;
        }
        void print(string num){
            cout<<num<<endl;
        }
};
int main()
{
    printer p;
    p.print(3);
    p.print(45.34);
    p.print("Hello");
    return 0;
}


/*Following functions canot*/