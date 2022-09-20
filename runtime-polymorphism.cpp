#include<iostream>
using namespace std;

class animal
{
    public:
    virtual void eat()
    {
        cout<<"EATING\n";
    }
};

class dog:public animal
{
    public:
    void eat()
    {
        cout<<"EATING bread\n";
    }
};

class cat:public animal
{
    public:
    void eat()
    {
        cout<<"EATING flesh\n";
    }
};

int main()
{
    animal* ptr;
    animal a;
    ptr=&a;
    ptr->eat();
    dog d;
    cat c;
    ptr=&d;
    ptr->eat();
    ptr=&c;
    ptr->eat();
    return 0;
}







