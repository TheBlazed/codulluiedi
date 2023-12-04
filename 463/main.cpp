#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,x,j=2,ct=0,i,m=2,jj;
    bool ok=0;
    cin>>n;
    for(i=1;i<=n;++i){
        cin>>x;
        j=2;
        ok=0;
        while(x!=1){
            if(j>=m) ok=1;
            if(x%j==0){
                if(j>m){
                    ct=0;
                    m=j;
                }
                while(x%j==0){
                    if(ok) ++ct;
                    x/=j;
                }
            }
            ++j;
            if(j*j>x) j=x;
        }
    }
    cout<<m<<' '<<ct;
    return 0;
}