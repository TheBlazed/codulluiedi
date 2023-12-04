#include <bits/stdc++.h>
using namespace std;
int a[1005];
int main(){
    int n,i,c=0,b=0,s=0;
    cin>>n;
    for(i=1;i<=n;++i) cin>>a[i];
    for(i=1;b==0 && i<=n;++i) if(a[i]%2==0) b=i;
    for(i=n;c==0 && i>=1;--i) if(a[i]%2==0) c=i;
    for(i=b;i<=c;++i) s+=a[i];
    if(b==0 && c==0) cout<<"NU EXISTA";
    else cout<<s;
    return 0;
}