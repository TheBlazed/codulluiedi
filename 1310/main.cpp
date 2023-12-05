#include <iostream>
using namespace std;
int main()
{
    int a,b,ct=0;
    cin>>a>>b;
    if(a%10!=0 && b%(a%10)==0){
        ct++;
    }
    if(a/10%10!=0 && b%(a/10%10)==0){
        ct++;
    }
    if(a/100!=0 && b%(a/100)==0){
        ct++;
    }
    cout<<ct;
    return 0;
}