#include <bits/stdc++.h>
using namespace std;
int a[1005];
int main(){
    int n,mi=1e9,ma=-1e9;
    cin>>n;
    for(int i=1;i<=n;++i) cin>>a[i];
    for(int i=1;i<=n;++i){
        mi=min(mi,a[i]);
        ma=max(ma,a[i]);
    }
    cout<<mi<<' '<<ma;
    return 0;
}