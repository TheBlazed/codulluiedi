#include <bits/stdc++.h>
using namespace std;
int main()
{
    double B,b,l,h,c,d;
    cin>>B>>b>>l;
    c=(B-b)/2;
    h=sqrt(pow(l,2)-pow(c,2));
    d=sqrt(pow(h,2)+pow(B-c,2));
    cout<<d;
}