#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k,m,p,x,y,z,t,r;
    cin>>n>>k>>m>>p;
    n*=k; y=n;
    m*=p; z=m;
    double o=n+m;
    while(m){
        r=n%m;
        n=m;
        m=r;
    }
    o/=n;
    cout<<o<<' '<<y/n<<' '<<z/n<<' '<<n;
    return 0;
}