#include<iostream>
using namespace std;

class A{
    public:
    const int number=100;
    int number2=90;

    void display() const{
        cout<<"\nThis is the constant method";
        // constant method can only call constant variable 
    }
};
int main()
{
    A a;
    const A a1;

    cout<<a.number<<endl;
    cout<<a.number2<<endl;
    cout<<a1.number<<endl;
    cout<<a1.number2<<endl;

    //cout<<a1.display(); calling constant method in cout is not allowed
    a1.display();

    a.display();
    return 0;
}