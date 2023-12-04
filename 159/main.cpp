#include <bits/stdc++.h>
using namespace std;
int a[1005];
int main(){
    int n,i;
    cin>>n;
    for(i=1;i<=n;++i) cin>>a[i];
    for(i=1;i<=n;++i){
        if(!(a[i]&1)){
            for(int j=n;j>=i;--j) a[j+1]=a[j];
            a[i+1]=a[i]*2;
            ++n;
            ++i;
        }
    }
    for(i=1;i<=n;++i) cout<<a[i]<<" ";
    return 0;
}