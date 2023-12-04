#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n,f1,f2,f;
    f1=f2=1;
    cin>>n;
    cout<<f1<<' '<<f2<<' ';
    while(f1<=n){
        f=f1+f2;
        f1=f2;
        f2=f;
        if(f<=n)cout<<f<<' ';
    }
    return 0;
}
