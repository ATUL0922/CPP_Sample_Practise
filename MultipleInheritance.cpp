#include<iostream>
using namespace std;

class A{
    public:
    int number;
    A()
    {
        cout<<"\nThis is default constructor of class A";
    }
    A(int a)
    {
        cout<<"\nA The number are "<<a;
    }
};
class B:virtual public A{
    public:
    B()
    {
        cout<<"\nThis is default constructor of class B";
    }
    B(int a):A()
    {
        cout<<"\nB The number are "<<a;
    }
};
class C:virtual public A{
    public:
    C()
    {
        cout<<"\nThis is default constructor of class C";
    }
    C(int a):A(a)
    {
         cout<<"\nC The number are "<<a;
    }
};
class D:public C,public B{ // how we inheriate class thats how they invoke the constructor 
                           // if the constructor do not call it by them
    public:
    D()
    {
        cout<<"\nThis is default constructor of class D";
    }

    D(int a):C(a),A(a),B(a)
    {
         cout<<"\nD The number are "<<a;
    }
};

int main()
{
    D d;
    D d2(5);
    return 0;
}