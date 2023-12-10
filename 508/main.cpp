#include <bits/stdc++.h>
#define N 100005
using namespace std;
int a[N];
int main(){
    int n,i,x,st,mj,dr,m;
    bool ok=0;
    cin>>n;
    for(i=1;i<=n;++i) cin>>a[i];
    cin>>m;
    for(i=1;i<=m;++i){
        cin>>x;
        st=1;dr=n;
        ok=0;
        while(st<=dr && !ok){
        mj=(st+dr)/2;
        if(a[mj]==x) ok=1;
        else if(a[mj]<x) st=mj+1;
        else dr=mj-1;
        }
        cout<<ok<<' ';
    }
    return 0;
}
