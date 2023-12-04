#include <iostream>
using namespace std;
bool prim(int n){
    if(n<2) return 0;
    if(n==2 || n==3) return 1;
    if(n%2==0||n%3==0) return 0;
    for(int i=5;i*i<=n;i+=6)
        if(n%i==0||n%(i+2)==0) return 0;
    return 1;
}
int a[1005];
int main(){
    int n,x,i;
    cin>>n;
    for(i=1;i<=n;++i) cin>>a[i];
    for(i=1;i<=n;++i) if(prim(a[i])) x=i;
    for(i=1;i<=n;++i){
        if(i!=x) cout<<a[i]<<' ';
        else cout<<0<<' ';
    }
    return 0;
}