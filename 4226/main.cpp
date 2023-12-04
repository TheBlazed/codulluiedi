#include <iostream>
using namespace std;
int main(){
    int t,n,c1,c2,c3,ct;
    cin>>t>>n>>c1>>c2;
    n--;
    ct=n;
    if(t==1){
        ct-=n/c1;
        ct-=n/c2;
        ct+=n/(c1*c2);
    } 
    if(t==2){
        cin>>c3;
        ct-=n/c1;
        ct-=n/c2;
        ct-=n/c3;
        ct+=n/(c1*c2);
        ct+=n/(c1*c3);
        ct+=n/(c2*c3);
        ct-=n/(c1*c2*c3);
    }
    cout<<ct;
    return 0;
}