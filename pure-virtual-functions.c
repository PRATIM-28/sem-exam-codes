#include<iostream>
using namespace std;

class balagurswamy
{
    public:
    virtual void example()
    {
        
    };
};

class cbook:public balagurswamy
{
    public:
    void examle()
    {
        cout<<"the writer of c book is balagurswamy\n";
    }
};

class java:public balagurswamy
{
    public:
    void example()
    {
        cout<<"the writer of the java book is balagurswamy\n";
    }
};
int main()
{
    balagurswamy* bptr[2];
    cbook c1;
    java j1;
    bptr[0]=&c1;
    bptr[1]=&j1;
    bptr[0]->example();
    bptr[1]->example();
    return 0;
}


















