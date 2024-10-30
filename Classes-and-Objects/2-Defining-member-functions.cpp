#include<iostream>
using namespace std;

class item{
    int num;                              //by default,members are private
    float cost;
    public:
        void putData(int,float);
        void getData(){                    //Inside class definition - functions are treated as inline functions
            cout<<"\nNo. of items:"<<num;
            cout<<"\nCost of each item:"<<cost;
        }
        void totalCost();
};

//Outside class definition
void item::putData(int a,float b){             // :: - Scope Resolution Operator
    num=a;                                     // class-name :: - membership label
    cost=b;
}

//Making outside function as inline
inline void item::totalCost(){   
    cost*=num;
    cout<<"\nTotal Cost:"<<cost;
}
int main()
{
    item x;                   //object of class
    x.putData(10,5.5);
    x.getData();
    x.totalCost();
    return 0;
}

//Inline Functions - the function call is replaced with actual code itself reducing the overhead for function
//call leading to improved performance and time consumption is less and execution speed is increased.Generally, used for smaller and frequent functions.
