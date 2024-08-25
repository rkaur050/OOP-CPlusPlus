#include<iostream>
using namespace std;

class item{
    int num;                             
    float cost;
    float total_cost;
    public:
        void putData(int,float);
        void totalCost(){
            total_cost=cost*num;
        }
        void getData(){                   
            cout<<"\nNo. of items:"<<num;
            cout<<"\nCost of each item:"<<cost;
            cout<<"\nTotalCost:"<<total_cost;
        }
};


void item::putData(int a,float b){           
    num=a;                                    
    cost=b;
    totalCost();                   //Nesting - calling member function inside member function -- no need of dot operator
}

int main()
{
    item x;                  
    x.putData(10,5.5);
    x.getData();
    x.totalCost();
    return 0;
}

