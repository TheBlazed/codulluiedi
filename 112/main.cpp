#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,x,mi=1e9,ma=0,r,a,b;
    cin>>n;
    for(int i=1;i<=n;++i){
        cin>>x;
        mi=min(mi,x);
        ma=max(ma,x);
    }
    a=ma;
    b=mi;
    while(mi){
        r=ma%mi;
        ma=mi;
        mi=r;
    }
    cout<<b/ma<<"/"<<a/ma;
    return 0;
}