#include <iostream>
using namespace std;
int main(){
    int k,n,ct2=0,ct5=0;
    cin>>k;
    for(int i=1;i<=k;++i){
        cin>>n;
        while(n%2==0){
            n/=2;
            ++ct2;
        }
        while(n%5==0){
            n/=5;
            ++ct5;
        }
    }
    if(ct2>ct5){
        cout<<ct5;
    }
    else if(ct2<ct5){
        cout<<ct2;
    }
    else cout<<0;
    return 0;
}