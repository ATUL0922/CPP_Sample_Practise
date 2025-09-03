#include<iostream>
using namespace std;
#include<string.h>
class Person{
    int age;
    char name[20];
    char country[20];

    public:
        Person();
        // Person(int,char *,char *);
        void setter();
        void getter();
        void getter(int,char *,char *);
};

Person::Person(){
    cout<<"\nThis is default constructor";
}

// Person::Person(int age,char *name, char *country)
// {
//     this->age=age;
//     this->name=name;
//     this->country=country;

// }

void Person::getter()
{
    cout<<"Enter the age of person"<<endl;
    cin>>age;
    cout<<"\nEnter the name of person"<<endl;
    cin>>name;
    cout<<"\nEnter the country of person"<<endl;
    cin>>country;
}

void Person::getter(int age,char *name1,char *country1)
{
    
    this->age=age;
    strcpy(name,name1);
    strcpy(country,country1);

}

void Person::setter()
{
    cout<<"The age of person is "<<age<<endl;
    cout<<"The name of person is "<<name<<endl;
    cout<<"The country of person is "<<country<<endl;
}


int main()
{
    Person p1;
    p1.getter(23,"Mukund","India");
    p1.setter();
    return 0;
}