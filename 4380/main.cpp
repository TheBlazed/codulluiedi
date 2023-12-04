#include <bits/stdc++.h>
using namespace std;
int a[1005];
int main(){
    int n,i,j,r,ct=0,ci,cj;
    cin>>n;
    for(i=1;i<=n;++i) cin>>a[i];
    for(i=1;i<n;++i){
        for(j=i+1;j<=n;++j){
            if((a[i]/10)%10==(a[j]/10)%10) ++ct;
        }
    }
    cout<<ct;
    return 0;
}