#include <iostream>
using namespace std;
int main()
{
    int h,m,h1,m1,h2,m2;
    cin>>h1>>m1>>h2>>m2;
    h=h1+h2+(m1+m2)/60;
    m=(m1+m2)%60;
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