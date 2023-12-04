#include <bits/stdc++.h>
using namespace std;
int a[30];
int main(){
    int n,p,k;
    cin>>n>>p>>k;
    for(int i=1;i<=n;++i) cin>>a[i];
    for(int i=n;i>=k;--i) a[i+1]=a[i];
    ++n;
    a[k]=p;
    for(int i=1;i<=n;++i) cout<<a[i]<<" ";
    return 0;
}