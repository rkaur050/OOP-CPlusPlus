//Constructors that take arguments
//Argument can be of any type except of the class to which it belongs

#include<iostream>
using namespace std;

class item{
    int num;
    float cost;
    public:
        item(int a,float b){
            num=a;
            cost=b;
        }                       
        void showdata(){
            cout<<"\nNumber:"<<num;
            cout<<"\nCost:"<<cost;
        }
};

int main()
{  
    item a(10,45.3);                    //implicit call
    item b=item(3,67);                 //explicit call
    a.showdata();
    b.showdata();
    return 0;
}

//Same class can have more than one constructors with different arguments.
// like -> item() ,item(int ,float)
//Constructor with no argument - implicit constructor