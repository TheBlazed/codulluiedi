#include <iostream>
using namespace std;
int main()
{
    int a,b,c,sa,sb,sc;
    cin>>a>>b>>c;
    sa=sb=sc=0;
    sa=a/10+a%10;
    sb=b/10+b%10;
    sc=c/10+c%10;
    if(sa>=sb && sa>=sc){
        cout<<a<<' ';
    }
    if(sb>=sa && sb>=sc){
        cout<<b<<' ';
    }
    if(sc>=sa && sc>=sb){
        cout<<c;
    }
    return 0;
}