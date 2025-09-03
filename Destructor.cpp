#include<iostream>
using namespace std;

class Abc{
   
    public:
     int *C=new int[20];
        // *(C+0)=10; we can not initalize pointer in the class we can assign 
        //  it value in constructor or method;
   
    Abc()
    {
        cout<<"This is constructor"<<endl;
        *(C+0)=10;
    }

    ~Abc()
    {
        cout<<"This is Destructor"<<*C;
        delete [] C;
    }
};


int main()
{
    Abc *A=new Abc;
    delete A;
    return 0;
}