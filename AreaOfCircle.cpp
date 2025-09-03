#include<iostream>
using namespace std;
static float Pi=3.14;
class Circle{
    float radius;
    public:
        Circle();
        Circle(float);
        float AreaOfCircle();
        float CircumferanceOfCircle();
};

Circle::Circle()
{
    cout<<"This is Default constructor"<<endl;
    cout<<"Enter the Radius"<<endl;
    cin>>radius;
}

Circle::Circle(float radius)
{
    cout<<"This is Parametarize constructor"<<endl;
    this->radius=radius;
}

float Circle::AreaOfCircle( )
{
    return Pi * radius * radius;
}

float Circle::CircumferanceOfCircle()
{
    return 2 * Pi * radius; 
}
int main()
{
    Circle C1;
    Circle C2(14.3);
    cout<<"This is by user value"<<C1.AreaOfCircle()<<endl;
    cout<<"This is by user value"<<C1.CircumferanceOfCircle()<<endl;

    cout<<"This is by programmer value"<<C2.AreaOfCircle()<<endl;
    cout<<"This is by programmer value"<<C2.CircumferanceOfCircle()<<endl;
    return 0;
}