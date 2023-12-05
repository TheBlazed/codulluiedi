#include <iostream>
using namespace std;
int main()
{
    int a,b,c,d,e;
    bool f=false;
    cin>>a>>b>>c>>d>>e;
    while(f==false)
    {
        if(a>b) swap(a,b);
        if(b>c) swap(b,c);
        if(c>d) swap(c,d);
        if(d>e) swap(d,e);
        if(a<b && b<c && c<d && d<e)
            f=true;
    }
    cout<<c+d+e;
    return 0;
}