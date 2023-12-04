#include <bits/stdc++.h>
using namespace std;
int a[1005];
int main(){
    int n,mi=1e9,ma=-1e9,pmi,pma;
    cin>>n;
    for(int i=1;i<=n;++i) cin>>a[i];
    for(int i=1;i<=n;++i){
        if(a[i]<mi){
            mi=a[i];
            pmi=i;
        }
        if(a[i]>ma){
            ma=a[i];
            pma=i;
        }
    }
    if(pma<pmi) swap(pma,pmi);
    for(int i=pmi;i<=pma;++i) cout<<a[i]<<' ';
    return 0;
}