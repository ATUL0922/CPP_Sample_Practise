#include<iostream>
using namespace std;

class A{
    int a;
    public:
    A()
    {
        cout<<"This is default constructor of class A call By class B constructor";
    }
};
class B:public A{
    public:
    B():A()
    {
        cout<<"\nThis is default constructorof class B call by class C constructor";
    }
};
class C:public B{
    public:
    C():B()
    {
        cout<<"\nThis is default constructor call by C object";
    }
};
int main()
{
    C c;
    return 0;
}