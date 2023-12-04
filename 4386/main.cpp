#include <bits/stdc++.h>
using namespace std;
int a[1005];
int main(){
    int n;
    long long mi=1e10;
    cin>>n;
    for(int i=1;i<=n;++i){
        cin>>a[i];
        mi=min(mi,(long long)a[i]);
    }
    for(int i=1;i<=n;++i){
        if(a[i]==mi){
            for(int j=n;j>=i;--j) a[j+1]=a[j];
            a[i]=mi;
            ++n;
            ++i;
        }
    }
    for(int i=1;i<=n;++i) cout<<a[i]<<' ';
    return 0;
}