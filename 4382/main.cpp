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
    int n;
    cin>>n;
    for(int i=1;i<=n;++i) cin>>a[i];
    for(int i=1;i<=n;++i){
        if(prim(a[i])) a[i]=0;
    }
    for(int i=1;i<=n;++i) cout<<a[i]<<" ";
    return 0;
}