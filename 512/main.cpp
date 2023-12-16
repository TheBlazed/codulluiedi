#include <bits/stdc++.h>
using namespace std;
#define N 1005
int a[N];
int main(){
    int n,i,mx=0,px,x,pxx;
    bool ord;
    cin>>n;
    x=n;
    for(i=1;i<=n;++i){
        cin>>a[i];
        if(a[i]>mx){
            mx=a[i];
            px=i;
        }
    }
    pxx=px;
    while(!ord){
        ord=1;
        for(i=1;i<px;++i){
            if(a[i]>a[i+1]){
                ord=0;
                swap(a[i],a[i+1]);
            }
        }
        --px;
    }
    ord=0;
    while(!ord){
        ord=1;
        for(i=pxx;i<x;++i){
            if(a[i]<a[i+1]){
                ord=0;
                swap(a[i],a[i+1]);
            }
        }
        --x;
    }
    for(i=1;i<=n;++i) cout<<a[i]<<' ';
    return 0;
}