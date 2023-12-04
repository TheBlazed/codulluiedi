#include <iostream>

using namespace std;

int main()
{
    int n,m,r;
    cin>>n>>m;
    while(n){
        r=m%n;
        m=n;
        n=r;
    }
    if(m==1) cout<<"PIE";
    else cout<<"NOPIE";
    return 0;
}
