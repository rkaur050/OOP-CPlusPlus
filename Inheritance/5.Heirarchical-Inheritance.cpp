//More than one sub-class inherits properties from a single base class
#include<iostream>
using namespace std;
class shape{
    public:
        string name;
        int side;
        shape(string a,int b):name(a),side(b){};
};
class triangle:public shape{
    int height;
    int base;
    public:
        triangle(string name,int side,int height,int base):shape(name,side){
            this->height=height;
            this->base=base;
        }
        void details(){
            cout<<"Shape Name:"<<name;
            cout<<"\nNo. of side:"<<side;
            cout<<"\nHeight of Triangle:"<<height;
            cout<<"\nBase Length:"<<base;
        }
};
class square:public shape{
    int length;
    public:
        square(string name,int side,int length):shape(name,side){
            this->length=length;
        }
        void details(){
            cout<<"\nShape Name:"<<name;
            cout<<"\nNo. of side:"<<side;
            cout<<"\nLength of each side:"<<length;
        }
};
int main()
{
    triangle t("triangle",3,10,5);
    square s("square",4,8);
    t.details();
    s.details();
    return 0;
}