#include<iostream>
using namespace std;

class A{
    
    static int number;
    public:
    static int num2;
    static void display()
    {

        cout<<number;
        cout<<"\nTo call static method does not require any memory allocation";
    }
    
};

int A::number=10;
int A::num2=20;


class B{
    static int value;
    public:
    static void add(int a, int b)
    {
        cout<<"\nThe value is "<<value<<endl;
        cout<<"\n"<<a+b;
    }
};
int B::value=100;

class C{
    static int value;
    public:
    static void add(int a, int b)
    {
        cout<<"This is call by object";
        cout<<"\nThe value is "<<value<<endl;
        cout<<"\n"<<a+b;
    }
};
int C::value=100;

int main()
{
   
   // cout<<"\nNumber2 call by private keyword is"<< A::num2<<endl;
    //A::display();
    //B::add(1,2);
    //cout<<"\nPrinting by static parametarize class ";


    //cout<<B::add(2,3); calling static method in cout is not allowed
    C c;
    c.add(5,6);
    
    return 0;
}