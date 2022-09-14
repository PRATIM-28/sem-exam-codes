#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    cout.setf(ios::showpoint);
    cout.width(5);
    cout<<"n";
    cout.width(15);
    cout<<"square_of_n";
    cout.width(20);
    cout<<"sum_of_n_and_n2\n";
    for(int n=1;n<=10;n++)
    {
        cout<<setw(5)<<n<<setw(12)<<(n*n)<<setw(15)<<(n+(n*n));
        cout<<"\n";
        
    }
    return 0;
}
