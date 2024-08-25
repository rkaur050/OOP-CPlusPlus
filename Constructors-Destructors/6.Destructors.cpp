//Destructors are the special member functions used to destory objects when they go out of scope.
//Never takes any argument nor returns any value.
//Cleans up the storage or memory space that is no longer available
//Last function which is going to be called when an object is destroyed.

#include<iostream>
using namespace std;
class test{
    static int count;
    public:
        test(){
            count++;
            cout<<"\nConstructor, object number "<<count<<" created";
        }
        ~test(){
            cout<<"\nDestructor, object number:"<<count<<" destroyed";
            count--;
        }
};
int test::count;
int main()
{
    cout<<"Creating first object t1...";
    test t1;
    {
        cout<<"\nInside block one";
        cout<<"\nCreating two more objects t2 and t3";
        test t2,t3;
        cout<<"\nLeaving block 1";
    }
    cout<<"\nLeaving main block";
    return 0;
}