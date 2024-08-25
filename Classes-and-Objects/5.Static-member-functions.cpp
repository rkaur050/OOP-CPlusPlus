//Can access or modfiy only static data members
//Can be defined inside class as they require no memory allocation
//Can be called using the class name
#include<iostream>
using namespace std;
class test{
    int code;
    static int count;
    public:
        void setCode(){
            code=++count;
        }
        void showCode(){
            cout<<"\nCode:"<<code;
        }
        static void showCount(){
            cout<<"\nCount:"<<count;
        }
};
int test::count;
int main()
{
    test a;
    a.setCode();
    test::showCount();
    a.showCode();
    return 0;
}