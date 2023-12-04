#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,x,mi=1e9,ma=0,r;
    cin>>n;
    for(int i=1;i<=n;++i){
        cin>>x;
        mi=min(mi,x);
        ma=max(ma,x);
    }
    while(mi){
        r=ma%mi;
        ma=mi;
        mi=r;
    }
    cout<<ma;
    return 0;
}