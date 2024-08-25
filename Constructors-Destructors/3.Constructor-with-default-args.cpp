#include<iostream>
using namespace std;

class item{
    int num;
    float cost;
    public:
        item(int a,float b=5.5){
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
    item a(10);                    //implicit call
    item b=item(3,67);                 //explicit call
    a.showdata();
    b.showdata();
    return 0;
}