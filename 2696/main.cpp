#include <iostream>
using namespace std;
int main()
{
    int a,b,c,ct=0;
    cin>>a>>b;
    if(a%2==b%2){
        c=a%10;
        if(c%2==0){
            ct++;
        }
        c=a/10;
        if(c%2==0){
            ct++;
        }
        c=b%10;
        if(c%2==0){
            ct++;
        }
        c=b/10;
        if(c%2==0){
            ct++;
        }
    }
    else{
        c=a%10;
        if(c%2==1){
            ct++;
        }
        c=a/10;
        if(c%2==1){
            ct++;
        }
        c=b%10;
        if(c%2==1){
            ct++;
        }
        c=b/10;
        if(c%2==1){
            ct++;
        }
    }
    cout<<ct;
    return 0;
}