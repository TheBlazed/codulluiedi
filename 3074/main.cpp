#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,s,ct=0,p=1,c=9,sm=0,jj;
    cin>>n>>s;
    n--;
    while(n){
            p*=10;
            c=c*10+9;
            n--;
    }
    for(int j=p;j<=c;++j){
        sm=0;
        jj=j;
        while(jj){
            sm+=jj%10;
            jj/=10;
        }
        if(sm==s){
            cout<<j<<' ';
            ct++;
        }
        }
    if(ct) cout<<endl<<ct;
    else cout<<0;
    return 0;
}