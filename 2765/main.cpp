#include <iostream>
using namespace std;
int main()
{
    int a,b,c,mi,ma;
    cin>>a>>b>>c;
    mi=a;
    if(b<mi) mi=b;
    else if(c<mi) mi=c;
    ma=a;
    if(b>ma) ma=b;
    if(c>ma) ma=c;
    if(mi<0 || ma>255) cout<<"NU E CULOARE";
    else if(ma-mi<=10) cout<<"GRI";
    else cout<<"CULOARE";
    return 0;
}