#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,ct,i=2;
    bool ok;
    cin>>n;
    while(n!=1){
        ok=0;
        ct=0;
        while(n%i==0){
            ok=1;
            ++ct;
            n/=i;
        }
        if(ok) cout<<i<<' '<<ct<<endl;
        ++i;
        if(i*i>n) i=n;
    }
    return 0;
}