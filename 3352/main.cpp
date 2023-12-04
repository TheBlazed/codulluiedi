#include <iostream>
using namespace std;
int main()
{
    int n,m,sn,sm,cn,cm,i=2,ct;
    cin>>n>>m;
    sn=sm=0;
    cn=n; cm=m;
    while(n!=1){
        ct=0;
        while(n%i==0){
            ct=i;
            n/=i;
        }
        sn+=ct;
        ++i;
        if(i*i>n) i=n;
    }
    i=2;
    while(m!=1){
        ct=0;
        while(m%i==0){
            ct=i;
            m/=i;
        }
        sm+=ct;
        ++i;
        if(i*i>m) i=m;
    }
    if(sn==sm) cout<<min(cn,cm);
    else if(sn>sm) cout<<cn;
    else cout<<cm;
    return 0;
}
