#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    ofstream outf("ITEM");
    
    char item[20];
    int price;
    cout<<"enter the item name: -";
    cin>>item;
    cout<<"\n";
    cout<<"enter the price of the item: -";
    cin>>price;
    outf<<item;
    outf<<"\n";
    outf<<price;
    
    outf.close();
    
    ifstream inf("ITEM");
    inf>>item;
    inf>>price;
    cout<<"item is: -"<<item<<endl;
    cout<<"price is: -"<<price<<endl;
    
    inf.close();
    return 0;
}
