#include <iostream>
using namespace std;
int main()
{
    int a,b,c,x,y;
    cin>>a>>b>>c;
    if(a>b) x=a;
    else x=b;
    if(c>x) x=c;

    if(a<b) y=a;
    else y=b;
    if(c<y) y=c;

    cout<<x-y;
    return 0;
}