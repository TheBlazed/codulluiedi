#include <iostream>
using namespace std;
int a[1505];
int main(){
    int n,k;
    cin>>n>>k;
    for(int i=1;i<=n;++i) cin>>a[i];
    for(int i=k;i<=n;++i)a[i]=a[i+1];
    for(int i=1;i<=n-1;++i) cout<<a[i]<<" ";
    return 0;
}