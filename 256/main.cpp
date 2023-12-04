#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k,n,f1,f2,f;
    bool ok=false;
    cin>>k;
    for(int i=1;i<=k;++i){
        cin>>n;
        ok=false;
        f1=f2=1;
        if(n==1){
            ok=true;
        }
        while(f1+f2<=n){
            f=f1+f2;
            f1=f2;
            f2=f;
            if(n==f){
                ok=true;
            }
        }
        if(ok==true){
            cout<<"DA"<<endl;
        }
        else cout<<"NU"<<endl;
    }
    return 0;
}