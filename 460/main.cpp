#include <iostream>
using namespace std;
int main()
{
    int h1,m1,h,m,x;
    cin>>h1>>m1>>x;
    h=h1+x/60;
    m=m1+x%60;
    while(m>=60)
    {
        h++;
        m-=60;
    }
    while(h>=24)
        h-=24;
    cout<<h<<' '<<m;
    return 0;
}