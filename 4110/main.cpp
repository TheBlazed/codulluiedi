#include <bits/stdc++.h>
using namespace std;
int a[1005];
int main(){
    int n,i,j,ct=0,x,d;
    cin>>n;
    for(i=1;i<=n;++i){
        cin>>x;
        for(d=1;d*d<=x;++d){
            if(x%d==0) a[i]+=d+x/d;
            if(d*d==x) a[i]-=d;
        }
        
    }
    for(i=1;i<n;++i){
        for(j=i+1;j<=n;++j){
            if(a[i]==a[j]) ct++;
        }
    }
    cout<<ct;
    return 0;
}