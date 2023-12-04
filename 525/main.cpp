#include <bits/stdc++.h>
#define N 1005
using namespace std;
int a[N];
int main()
{
    int n,i,a,b,x,ct=0;
    a=b=0;
    bool cr[1000]={0};
    cin>>n;
    for(i=1;i<=n;++i){
        cin>>x;
        if(x<1000) cr[x]=1;
    }
    for(i=999;i>=100;--i)
        if(!cr[i]){
            ++ct;
            if(b==0) b=i;
            else a=i;
            if(ct==2) break;
        }
    if(ct==2) cout<<a<<' '<<b;
    else cout<<"NU EXISTA";
    return 0;
}
