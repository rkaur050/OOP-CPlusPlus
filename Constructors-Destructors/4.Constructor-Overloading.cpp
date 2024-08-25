//technique of having two or more constructors in a class which are distincguished on the basis of type and no. of 
//arguments they have
#include<iostream>
using namespace std;

class item{
    int num;
    float cost;
    public:
        item():num(34),cost(56.423){};        //default constructor
        item(int a,float b=43.7){           //parametrized constructor
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
    item a(10,45.3);                   
    item b(56);      
    item c;
    a.showdata();
    b.showdata();
    c.showdata();
    return 0;
}