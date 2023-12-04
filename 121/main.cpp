#include <iostream>
using namespace std;
int main(){
    int n,c,ct=0,ma=0;
    cin>>n;
    if(n==0){
        cout<<0<<' '<<1;
        return 0;
    }
    while(n){
        c=n%10;
        if(c>ma){
            ma=c;
            ct=1;
        }
        else if(c==ma){
            ct++;
        }
        n/=10;
    }
    cout<<ma<<' '<<ct;
    return 0;
}