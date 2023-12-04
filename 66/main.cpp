#include <iostream>
using namespace std;
int main(){
    long long n, ct=0;
    cin>>n;
    while(n){
        ct++;
        n/=10;
    }
    if(ct==0){
        cout<<1;
    }
    else{
        cout<<ct;
    }
    return 0;
}