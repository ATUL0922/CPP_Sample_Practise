#include<iostream>
using namespace std;

template <class A>
class Abc{
    public:
    void add(A x, A y)
    {
        cout<<x+y;
    }
};

template<typename T>
T display()
{
    cout<<"Call by function template";
    
}

template<typename T>
T add(T a, T b)
{
    return a+b;
}
int main()
{
    Abc<int> a;
    a.add(3,3);
   display<int>();
    cout<<"The result is : "<<add(2,4);
    return 0;
}