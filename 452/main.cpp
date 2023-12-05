#include <iostream>
using namespace std;
int main()
{
    int a,c,ct=0;
    cin>>a;
    while(a){
        c=a%10;
        if(c%2!=0) ct++;
        a/=10;
    }
    cout<<ct;
    return 0;
}