#include <iostream>
using namespace std;
int main(){
    int n,k,ct=0,s=0,x;
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        cin>>x;
        if(x%k==0) ++ct;
        if(x%2) s+=x;
    }
    cout<<s<<' '<<ct;
    return 0;
}
