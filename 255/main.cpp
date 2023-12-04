#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,f1,f2,f;
    f1=f2=1;
    cin>>n;
    if(n==1) cout<<f1;
    else{
        cout<<f1<<' '<<f2<<' ';
        for(i=3;i<=n;++i){
            f=f1+f2;
            f1=f2;
            f2=f;
            cout<<f<<' ';
        }
    }
    return 0;
}
