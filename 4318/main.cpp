#include <iostream>
using namespace std;
int main()
{
    int n, cnt, d, i, x, ct;
    cin>>n;
    ct=0;
    for(i=1; i<=n; i++)
    {
        cin>>x;
        cnt=0;
        if(x==0) cnt=1;
        while(x!=0)
        {
            cnt++;
            x/=10;
        }
     if(cnt%2!=0) ct++;
    }
    cout<<ct;
    return 0;
}