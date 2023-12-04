#include <iostream>
using namespace std;
int main(){
    int n,x,ct,ma=-1e9;
    cin>>n;
    for(int i=1;i<=n;++i){
        cin>>x;
        if(x>ma){
            ma=x;
            ct=1;
        }
        else if(x==ma) ++ct;
    }
    cout<<ma<<' '<<ct;
    return 0;
}