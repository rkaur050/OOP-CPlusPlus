//no arguments are passed
#include<iostream>
using namespace std;
class item{
    int a,b;
    public:
    item(int x,int y):a(x),b(y){};
    void operator +(){
        a++;
        b++;
    }
    void show(){
        cout<<this->a<<" "<<this->b<<" ";
    }
};
int main()
{
    item d(34,5);
    d.show();
    +d;
    d.show();
    return 0;
}