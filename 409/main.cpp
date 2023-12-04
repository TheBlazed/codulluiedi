#include <bits/stdc++.h>
using namespace std;
int main(){
    int ogl=0,n,x,i,ct=0,xx,r;
    cin>>n;
    for(i=1;i<=n;++i){
        cin>>x;
        xx=x;
        while(x){
            ogl=ogl*10+x%10;
            x/=10;
        }
        while(ogl){
            r=xx%ogl;
            xx=ogl;
            ogl=r;
        }
        if(xx==1) ++ct;
    }
    cout<<ct;
    return 0;
}