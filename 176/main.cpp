#include <iostream>
using namespace std;
int main()
{
    int c,p,g,o;
    cin>>c>>p;
    g=0, o=c;
    while(g<=c)
    {
        if(g*2+o*4==p)
        {
            cout<<g<<' '<<o<<endl;
            return 0;
        }
        g++;
        o--;
    }
}