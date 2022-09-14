#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream outf;
    outf.open("STATES");
    
    outf<<"ODISHA \n";
    outf<<"CHATTISGARHH \n";
    outf<<"DELHI \n";
    
    outf.close();
    
    outf.open("CAPITAL");
    outf<<"BBSR\n";
    outf<<"raiput\n";
    outf<<"delhi\n";
    
    outf.close();
    
    char line[80];
    ifstream inf;
    inf.open("CAPITAL");
    cout<<"\nthe contents of the state file is\n";
    while(inf)
    {
        inf.getline(line,80);
        cout<<line;
    }
    inf.close();
    
    inf.open("STATES");
    cout<<"\nthe contents of the capital file is\n";
    while(inf)
     {
         inf.getline(line,80);
         cout<<line;
     }
    
    return 0;
    
    
}
    
    
    
    
