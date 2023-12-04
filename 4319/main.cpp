#include <iostream>
using namespace std;
int main(){
    long long n,ct=0,x;
    cin>>n;
    for(int i=1;i<=n;++i){
        cin>>x;
        do{
            if(x%10==0){
                ++ct;
                break;
            }
            x/=10;
        }while(x>9);
    }
    cout<<ct;
    return 0;
}