#include<iostream>
using namespace std;

class numbers
{
    private:
    int x;
    int y;
    int z;
    public:
    void get_numbers(int a,int b,int c)
    {
        x=a;
        y=b;
        z=c;
    }
    void print()
    {
       cout<<"x="<<x<<endl;
        cout<<"y="<<y<<endl;
        cout<<"z="<<z<<endl;
    }
    void operator -();
};

void numbers:: operator -()
{
    x=-x;
    y=-y;
    z=-z;
}

int main()
{
    numbers n1;
    n1.get_numbers(5,-1,-6);
    n1.print();
    
    -n1;
    cout<<"-n1\n";
    n1.print();
    
    return 0;
}
