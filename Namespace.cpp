#include<iostream>
using namespace std;


namespace atul
{
    void display()
    {
        cout<<"Hello from Atul";
    }
}
// using namespace atul;
int main()
{
    // display();
    atul::display();
    return 0;
}