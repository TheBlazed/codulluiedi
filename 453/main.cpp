#include <iostream>
using namespace std;
int main()
{
    int a,b,c, ct=3;
    cin>>a>>b>>c;
    if(a==b) ct--;
    if(a==c) ct--;
    if(b==c) ct--;
    if(ct==0) cout<<1;
    else cout<<ct;
    return 0;
}