#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,f1,f2,f,s=0,nn;
    cin>>n;
    nn=n;
    while(s!=nn){
        f1=f2=f=1;
        while(f1+f2<=n){
            f=f1+f2;
            f1=f2;
            f2=f;
        }
        cout<<f<<' ';
        s+=f;
        n-=f;
    }
    return 0;
}
