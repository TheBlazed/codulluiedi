#include <bits/stdc++.h>
#define N 205
int a[N];
using namespace std;
bool prim(int n){
    if(n<2) return 0;
    if(n==2 || n==3) return 1;
    if(n%2==0 || n%3==0) return 0;
    for(int d=5;d*d<=n;d+=6)
        if(n%d==0 || n%(d+2)==0) return 0;
    return 1;
}
int main()
{
    int n,s=0,i;
    cin>>n;
    for(i=1;i<=n;++i){
        cin>>a[i];
    }
    for(i=n;i>=1;--i) if(prim(a[i])) cout<<a[i]<<' ';
    return 0;
}
