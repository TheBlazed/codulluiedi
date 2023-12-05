#include <iostream>
using namespace std;
int main()
{
    int x,y,n;
    cin>>x>>y>>n;
    int a,z,h;
    a=(x*y);
    z=(n-n/a*a)/y;
    if(z==0)
        h=n-n/a*a;
    else
        h=(n-n/a*a)-(n-n/a*a)/z*z;
    cout<<n/a<<endl<<z<<endl<<h;
    return 0;
}