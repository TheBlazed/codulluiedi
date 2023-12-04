#include <iostream>
using namespace std;
int main(){
    int n,ogl=0,c,ct=1;
    cin>>n;
    while(n){
        c=n%10;
        ogl=ogl*10+c;
        n/=10;
    }
    for(int i=1;i<=ogl/2;i++){
        if(ogl%i==0){
            ct++;
        }
    }
    cout<<ct;
    return 0;
}