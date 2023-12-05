#include <iostream>
using namespace std;
int main(){
    long long n,nn,c,m=0, ct=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>nn;
        while(nn){
            c=nn%10;
            if(c>m){
                m=c;
            }
            nn/=10;
        }
        if(m%2!=0){
            ct++;
        }
        m=0;
    }
    cout<<ct;
    return 0;
}