#include <bits/stdc++.h>
using namespace std;
#define N 1005
int a[N];
int main(){
    int n,i,mi=1e9,mx=0,pmi,pmx;
    bool ord;
    cin>>n;
    for(i=1;i<=n;++i){
        cin>>a[i];
        if(a[i]>mx){
            pmx=i;
            mx=a[i];
        }
        if(a[i]<mi){
            pmi=i;
            mi=a[i];
        }
    } 
    if(pmi>pmx) swap(pmi,pmx);
    while(!ord){
        ord=1;
        for(i=pmi;i<pmx;++i){
            if(a[i]>a[i+1]){
                ord=0;
                swap(a[i],a[i+1]);
            }
        }
        --pmx;
    }
    for(i=1;i<=n;++i) cout<<a[i]<<' ';
    return 0;
}