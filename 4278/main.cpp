#include <iostream>
using namespace std;
int main(){
    int n,s=0,cnt=0,ct=0;
    while(cin>>n && n){
        cnt=0;
        if(n%2==0){
            s+=n;
            
        }
        while(n){
            cnt++;
            n/=10;
        }
        if(cnt==2){
            ct++;
        }
    }
    cout<<s<<' '<<ct;
    return 0;
}