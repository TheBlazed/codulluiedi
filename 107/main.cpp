#include <iostream>
using namespace std;
int main(){
    int n,ct=0,p;
    cin>>n;
    p=n%10;
    do{
        if(n%10==p){
            ct++;
        }
        n/=10;
    }while(n);
    cout<<ct;
    return 0;
}