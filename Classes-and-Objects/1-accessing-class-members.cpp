//ACCESS SPCIFIERS or MODIFIERS
// private, protected and public
//by default ,members are private
#include<iostream>
using namespace std;

class xyz{
    private:             //can be accessed only by the member functions of class
        int x;
        int y;
    protected:          //can be accessed only by the member functions of class but can be inherited
        int a;
    public:             
        int z;
};

int main()
{
    xyz p;
    // p.x=0;          //error, x is private
    // p.a=45;            //error, a is protected
    p.z=0;          //ok, z is public
    return 0;
}