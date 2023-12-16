#include <bits/stdc++.h>
using namespace std;
#define N 1005
int a[N],b[N];
int main(){
    int n,i,k,x,y;
    bool ord=0;
    cin>>n>>k;
    x=k;
    y=n-k;
    for(i=1;i<=k;++i) cin>>a[i];
    for(i=1;i<=n-k;++i) cin>>b[i];
    while(!ord){
        ord=1;
        for(i=1;i<x;++i){
            if(a[i]>a[i+1]){
                ord=0;
                swap(a[i],a[i+1]);
            }
        }
        --x;
    }
    ord=0;
    while(!ord){
        ord=1;
        for(i=1;i<y;++i){
            if(b[i]<b[i+1]){
                ord=0;
                swap(b[i],b[i+1]);
            }
        }
        --y;
    }
    for(i=1;i<=k;++i) cout<<a[i]<<' ';
    for(i=1;i<=n-k;++i) cout<<b[i]<<' ';
    return 0;
}