#include <bits/stdc++.h>
using namespace std;
int a[1005];
int main(){
    int n,i,s=0,ct=0;;
    cin>>n;
    for(i=1;i<=n;++i){cin>>a[i]; s+=a[i];}
    s/=n;
    for(i=1;i<=n;++i) if(a[i]>s) ++ct;
    cout<<ct;
    return 0;
}