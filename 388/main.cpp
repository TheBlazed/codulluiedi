#include <iostream>
using namespace std;
int main(){
    long long n,ct=0,i;
    cin>>n;
    for(i=1;i*i<n;++i){
        if(n%i==0){
            if(i%2==0) ++ct;
            if((n/i)%2==0) ++ct;
        }
    }
    if(i*i==n && n%2==0) ++ct;
    cout<<ct;
    return 0;
}