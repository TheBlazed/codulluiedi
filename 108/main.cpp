#include <iostream>
using namespace std;
int main(){
    int n,ct=0,k,c;
    cin>>n;
    k=n;
    while(k>9){
        k/=10;
    }
    do{
        c=n%10;
        n/=10;
        if(k==c){
            ++ct;
        }
    }while(n);
    cout<<ct;
    return 0;
}