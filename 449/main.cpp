#include <iostream>
using namespace std;
int main()
{
    int n,ct=0;
    cin>>n;
    if(n){
        ct++;
        n/=10;
        if(n){
            ct++;
            n/=10;
            if(n){
                ct++;
                n/=10;
            }
        }
    }
    cout<<ct;
    return 0;
}