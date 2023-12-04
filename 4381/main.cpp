#include <bits/stdc++.h>
using namespace std;
int a[1005];
int main(){
    int n,i,j,ci,cj,ct=0;
    cin>>n;
    for(i=1;i<=n;++i) cin>>a[i];
    for(i=1,j=n;i<=n/2;++i,--j){
        a[i]/=10;
        a[j]/=10;
        if(a[i]%10==a[j]%10) ++ct;
        
    }
    cout<<ct;
    return 0;
}